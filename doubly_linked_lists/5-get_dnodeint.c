#include "lists.h"


/**
 * get_dnodeint_at_index - Get the nth node of a dlistint_t list
 * @head: dlistint_t list to get the node from
 * @index: Index of the node to get, starting from 0
 *
 * Return: The nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
			return (current);

		current = current->next;
		i++;
	}

	return (NULL);
}
