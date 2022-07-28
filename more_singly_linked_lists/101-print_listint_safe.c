#include "lists.h"


size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		printf("[%p] %d\n", current_node, current_node->n);
		count++;
		current_node = current_node->next;
	}

	return (count);
}
