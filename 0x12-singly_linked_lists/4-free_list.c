#include "lists.h"
/**
 * free_list - free list_t
 * @head: pointer to the head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return (NULL);
	}

	list_t *cleaner = head;

	while (cleaner)
	{
		list_t *next = cleaner->next;

		free(cleaner);
		cleaner = next;
	}
}
