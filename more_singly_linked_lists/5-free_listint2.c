#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: listint_t list to free
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = NULL;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = *head;

		*head = (*head)->next;

		free(current);
	}
}
