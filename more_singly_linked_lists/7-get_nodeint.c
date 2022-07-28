#include "lists.h"


/**
 * get_nodeint_at_index - Get the nth node of a listint_t list
 * @head: listint_t list to get the node
 * @index: Index of the node
 *
 * Return: nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (i == index)
			return (curr);

		curr = curr->next;
		i++;
	}

	return (NULL);
}
