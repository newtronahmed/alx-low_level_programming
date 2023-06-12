#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
unsigned long int last_index(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int i, index;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
		}
	}
	if (node)
	{
		index = key_index((const unsigned char *)node->key, ht->size);
		return (index);
	}
	return ((unsigned long int) -1);
}
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, index;
	hash_node_t *current;

	if (!ht)
	{
		return;
	}
	index = last_index(ht);
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			if (current->next != NULL)
				printf(", ");
			current = current->next;
		}
		if (ht->array[i] && i < index)
		{
			printf(", ");
		}
	}
	printf("}\n");
}
