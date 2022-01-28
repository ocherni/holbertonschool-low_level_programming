#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: the size of the array
 *
 * Return: the newly created hash_table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	size_t i;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}
	/* initialize table */
	for (i = 0; i < size; i++) 
			hash_table->array[i] = NULL;

	return (hash_table);
}
