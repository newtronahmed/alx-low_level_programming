#include "hash_tables.h"
/**
 * hash_table_create - creates hash tale of a gien size
 *
 * @size: size of table
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size <= 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array  = calloc(size, (size_t)size * sizeof(hash_node_t *));
	if (table->array  == NULL)
	{
		return (NULL);
	}
	return (table);
}
