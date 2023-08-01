#include "lists.h"
/**
 * pop_listint -  deletes the head node of a listint_t linked list.
 * @head: double pointer the the 1st node.
 * Return: the data of head node.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;
	return (n);
}
