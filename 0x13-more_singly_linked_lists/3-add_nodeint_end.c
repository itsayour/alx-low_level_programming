#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to the 1st node.
 * @n: data.
 * Return: the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (!tail)
		return (NULL);

	tail->n = n;
	tail->next = NULL;

	if (!*head)
	{
		*head = tail;
		return (*head);
	}

	while (curr->next)
	{
		curr = curr->next;
	}
	curr->next = tail;
	return (tail);
}
