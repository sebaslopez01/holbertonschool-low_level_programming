#include "lists.h"


size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current_node = NULL;

	if (h == NULL)
		return (count);

	while (*h != NULL)
	{
		current_node = *h;

		*h = (*h)->next;
		
		free(current_node);

		count++;
	}

	return (count);
}
