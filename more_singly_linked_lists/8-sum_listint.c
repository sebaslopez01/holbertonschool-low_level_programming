#include "lists.h"


/**
 * sum_listint - Sum all the data (n) of a listint_t list
 * @head: listint_t list to sum all the data
 *
 * Return: The sum of all the data (n) or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;

		curr = curr->next;
	}

	return (sum);
}
