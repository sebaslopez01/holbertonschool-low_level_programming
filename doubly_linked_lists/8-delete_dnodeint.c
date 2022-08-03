#include "lists.h"


/**
 * delete_dnodeint_at_index - Deletes the node at an index of a dlistint_t list
 * @head: dlistint_t list to the delete the node
 * @index: Indedx of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = NULL, *delete_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		delete_node = current;
		*head = current->next;
		free(delete_node);
		return (1);
	}

	while (current != NULL)
	{
		if (i == index - 1)
		{
			if (current->next == NULL)
				return (-1);

			delete_node = current->next;

			current->next = current->next->next;

			if (current->next != NULL)
				current->next->prev = current;

			free(delete_node);

			return (1);
		}

		current = current->next;
		i++;
	}

	return (-1);
}
