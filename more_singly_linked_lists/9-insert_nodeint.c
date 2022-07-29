#include "lists.h"


/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: listint_t list to add a new node
 * @idx: Index of the list where the new node should be added
 * @n: Data to be added to the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = NULL;
	listint_t *curr = NULL;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (head == NULL && idx == 0)
	{
		new_node->next = NULL;
		return (new_node);
	}

	if (head != NULL)
		curr = *head;

	if (idx == 0)
	{
		new_node->next = curr;
		return (new_node);
	}

	while (curr != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = curr->next;
			curr->next = new_node;
			return (new_node);
		}
		curr = curr->next;
		i++;
	}

	return (NULL);
}
