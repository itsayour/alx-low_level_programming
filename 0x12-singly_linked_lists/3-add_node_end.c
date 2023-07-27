#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list_t list
 * @head: double pointer to list_t
 * @str: pointer to the first node in list_t
 * Return: a pointer to the new node or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail = malloc(sizeof(list_t));
	list_t *curr = *head;

	if (tail == NULL)
	{
		free(tail);
		return (NULL);
	}
	else
	{
		tail->str = strdup(str);
		tail->len = strlen(str);
		tail->next = NULL;

		if (!*head)
			*head = tail;
		else
		{
			while (curr->next)
				curr = curr->next;
			curr->next = tail;
		}
		return (tail);
	}
}
