#include "lists.h"


/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Head of the list_t list
 * @str: Data to be added to the node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *curr = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (curr->next != NULL)
		curr = curr->next;

	curr->next = new_node;

	return (*head);
}
