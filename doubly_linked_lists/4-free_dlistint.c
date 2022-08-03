#include "lists.h"


/**
 * free_dlistint - Frees a dlistint_t list
 * @head: dlistint list to free
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = NULL;

	while (head != NULL)
	{
		current = head;

		head = head->next;

		free(head);
	}
}
