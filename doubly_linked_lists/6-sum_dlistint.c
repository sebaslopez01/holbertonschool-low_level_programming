#include "lists.h"


/**
 * sum_dlistint - Sum all the data of a dlistint_t list
 * @head: dlistint_t list to sum the data
 *
 * Return: The sum of all the data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;

		current = current->next;
	}

	return (sum);
}
