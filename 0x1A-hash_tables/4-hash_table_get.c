#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @key: key
 * @ht: hash table
 *
 * Return: value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *head;

	if (!ht || !key || !strcmp(key, ""))
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);

	head = (ht->array)[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			return (head->value);
		}
		head = head->next;
	}
	return (NULL);
}
