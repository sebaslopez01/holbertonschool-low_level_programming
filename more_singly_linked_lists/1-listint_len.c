#include "lists.h"


/**
 * listint_len - Count the number of elements on a linked listint_t list
 * @h: listint_t list to count
 *
 * Return: Number of elements on the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
