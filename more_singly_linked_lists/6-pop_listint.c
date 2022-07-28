#include "lists.h"


/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: listint_t list to delete
 *
 * Return: Head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *curr = *head;

	if (head == NULL)
		return (0);

	if (curr != NULL)
	{
		n = curr->n;

		*head = curr->next;

		free(curr);

		return (n);
	}

	return (0);
}
