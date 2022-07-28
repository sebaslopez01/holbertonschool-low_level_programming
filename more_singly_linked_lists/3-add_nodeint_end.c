#include "lists.h"


/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: listint_t list to add the new node
 * @n: Data to add to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (*head);
}
