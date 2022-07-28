#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *head_copy = head;

	while (head != NULL)
	{
		if (head_copy->next != NULL && head_copy->next->next != NULL)
			head_copy = head_copy->next->next;

		printf("[%p] %d\n", (void *)head, head->n);

		if (head->next == head_copy)
			exit(98);

		count++;

		head = head->next;
	}

	return (count);
}
