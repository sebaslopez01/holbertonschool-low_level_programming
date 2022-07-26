#include "lists.h"


/**
 * print_list - Prints all elements of a list_t list
 * @h: list_t list
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *temp = h;

	while (temp->next != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", temp->len, temp->str);
		count++;

		temp = temp->next;
	}

	return (count);
}
