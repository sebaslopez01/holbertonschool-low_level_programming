#include "lists.h"


/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: listint_t list to add the new node
 * @n: Data to add to the node
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
