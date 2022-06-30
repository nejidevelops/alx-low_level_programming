#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *new_temp = NULL;
	unsigned long int i = 0, j = 0;

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		for (; i < ht->size; i++)
		{
			new_temp = ht->array[i];
			for (; new_temp != NULL; j++)
			{
				free(new_temp->key);
				free(new_temp->value);
				new_temp = new_temp->next;
				free(ht->array[i]);
				ht->array[i] = new_temp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
