#include "lists.h"


/**
 * free_list - Frees a list_t list
 * @head: list_t list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr = NULL;

	while (head != NULL)
	{
		curr = head;

		while (curr->next != NULL)
			curr = curr->next;

		free(curr->str);
		free(curr);
	}
}
