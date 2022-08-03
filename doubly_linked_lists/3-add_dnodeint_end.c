#include "lists.h"


/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: dlistint_t list to add the new node
 * @n: Data to add to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (*head);
}
