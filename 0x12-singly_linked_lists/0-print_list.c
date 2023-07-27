#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to 1st node.
 * Return: the number of node.
 */
size_t print_list(const list_t *h)
{
	char *str;
	unsigned int len;
	int count;

	while(h != NULL)
	{
		len = h->len;
		str = h->str;
		if (str != NULL)
		{
			printf("[%d] %s\n",len, str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}
	return (count);
}
