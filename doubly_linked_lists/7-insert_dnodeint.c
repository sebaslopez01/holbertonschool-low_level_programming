#include "lists.h"


/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: dlistint_t list to add the new node
 * @idx: Index of the list where the new node should be added
 * @n: Data to add to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = NULL, *new_node = NULL;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (*h == NULL && idx == 0)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	if (idx == 0)
	{
		new_node->next = current;
		new_node->prev = NULL;
		(*h)->prev = new_node;
		*h = new_node;
		return (*h);
	}
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			new_node->prev = current;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
