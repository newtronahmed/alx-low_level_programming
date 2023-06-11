#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 *
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *item, *head;

	if (!ht || !value || !strcmp(key, "") || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);

	item->value = strdup(value);
	item->key = strdup(key);
	head = ht->array[index];
	/* if current index is empty*/
	if (head == NULL)
	{
		item->next = NULL;
		ht->array[index] = item;
		return (1);
	}
	/*if key exists, update*/
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	head = ht->array[index];
	item->next = head;
	ht->array[index]  = item;
	return (1);
}
