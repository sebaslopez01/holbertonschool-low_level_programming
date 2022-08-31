#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *current = NULL;
	int n;

	if (ht == NULL)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		n = 0;

		while (current != NULL)
		{
			if (n)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			n = 1;
		}
	}

	printf("}\n");
}
