#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", &head, head->n);
		count++;
		head = head->next;
	}

	return (count);
}
