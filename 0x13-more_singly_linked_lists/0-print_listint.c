#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: arg to the first node
 * Return: node count
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
