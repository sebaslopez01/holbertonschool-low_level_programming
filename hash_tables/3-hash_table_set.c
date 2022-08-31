#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table to add or update the key/value
 * @key: The key to use
 * @value: The value associated with the key
 *
 * Return: 1 is it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_hash_node = NULL, *current = NULL;

	if (*key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	current = ht->array[index];
	if (current)
	{
		new_hash_node->next = current;

		while (current != NULL)
		{
			if (!strcmp(current->key, key))
			{
				free(current);
				break;
			}
			current = current->next;
		}
	}
	else
		new_hash_node->next = NULL;

	current = new_hash_node;

	return (1);
}
