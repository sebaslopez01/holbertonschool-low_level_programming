#include "lists.h"


/**
 * add_node - Adds a node at the beginning of a list_t list
 * @head: Head of the list_t list
 * @str: Data to be added to the node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = NULL;

	new_head = malloc(sizeof(list_t));

	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = strlen(str);
	new_head->next = *head;

	*head = new_head;

	return(*head);
}
