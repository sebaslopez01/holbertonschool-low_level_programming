#include "hash_tables.h"


/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			current = ht->array[i];

			ht->array[i] = current->next;

			free(current->key);
			free(current->value);
			free(current);
		}
	}

	free(ht->array);
}
