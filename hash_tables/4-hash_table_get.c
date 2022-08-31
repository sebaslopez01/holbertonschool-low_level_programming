#include "hash_tables.h"


/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: Key to look
 *
 * Return: The value associated with element, or NULL if key couldn't
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL;
	unsigned long int index;

	if (ht == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	current = ht->array[index];
	while (current != NULL)
	{
		if (!strcmp(current->key, key))
			return (current->value);

		current = current->next;
	}

	return (NULL);
}
