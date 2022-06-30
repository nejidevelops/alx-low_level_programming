#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_temp = NULL;
	unsigned long int i = 0, a = 0;
	char *new = ", ", *space = "";

	if (ht == NULL)
		return;
	if (ht != NULL)
	{
		printf("{");
		for (; i < ht->size; i++)
		{
			new_temp = ht->array[i];
			for (; new_temp != NULL; a++)
			{
				printf("%s", space);
				printf("'%s': '%s'", new_temp->key, new_temp->value);
				space = new;
				new_temp = new_temp->next;
			}
		}
		printf("}\n");
	}
}
