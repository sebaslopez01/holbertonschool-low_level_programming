#include "lists.h"


/**
 * free_listint - Frees a listint_t list
 * @head: listint_t lists
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *curr = NULL;

	while (head != NULL)
	{
		curr = head;

		head = head->next;

		free(curr);
	}
}
