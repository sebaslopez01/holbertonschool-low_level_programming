#include "lists.h"


/**
 * delete_nodeint_at_index - Deletes the node at an index of a listint_t list
 * @head: listint_t list
 * @index: Index to delete the node
 *
 * Return: 1 if it succeeded, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = NULL;
	listint_t *delete_node = NULL;
	
	if (head == NULL || *head == NULL)
		return (-1);

	curr = *head;

	if (index == 0)
	{
		free(curr);
		return (1);
	}
	
	while (curr != NULL)
	{
		if (i == index - 1)
		{
			if (curr->next == NULL)
				return (-1)

			delete_node = curr->next;

			curr->next = curr->next->next;

			free(delete_node);

			return (1);
		}

		curr = curr->next;
		i++;
	}

	return (-1);
}
