#include "lists.h"

size_t listint_len(const listint_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
