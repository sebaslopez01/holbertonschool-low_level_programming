#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current = NULL;
	char n, m = 0;

	if (ht == NULL)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		n = 0;

		if (m && current)
			printf(", ");

		while (current != NULL)
		{
			if (n)
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);

			current = current->next;
			n = 1;
		}

		m = 1;
	}

	printf("}\n");
}
