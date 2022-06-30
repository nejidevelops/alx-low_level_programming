#include "hash_tables.h"

/**
 * hash_table_set - creates the nodes for the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: bool
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_table = NULL, *aux_key = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	aux_key = ht->array[idx];

	while (aux_key != NULL)
	{
		if (strcmp(key, aux_key->key) == 0)
		{
			free(aux_key->value);
			aux_key->value = strdup(value);
			return (1);
		}
		aux_key = aux_key->next;
	}
	new_table = malloc(sizeof(hash_node_t));
	if (new_table == NULL)
		return (0);
	new_table->key = strdup(key);
	if (new_table->key == NULL)
	{
		free(new_table);
		return (0);
	}
	new_table->value = strdup(value);
	if (new_table->value == NULL)
	{
		free(new_table->key);
		free(new_table);
		return (0);
	}
	new_table->next = NULL;
	if (ht->array[idx] != NULL)
		new_table->next = ht->array[idx];
	ht->array[idx] = new_table;

	return (1);
}
