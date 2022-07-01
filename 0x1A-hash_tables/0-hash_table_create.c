#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the array.
 *
 * Return: pointer to newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array_nodes;

	if (size <= 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	array_nodes = calloc(size, sizeof(hash_node_t *));
	if (array_nodes == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = array_nodes;
	return (hash_table);
}