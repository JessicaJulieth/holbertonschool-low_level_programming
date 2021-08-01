#include "lists.h"

/**
 * print_list -  prints all the elements
	* @h: Pointer
	*
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	int n;

	n = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			n++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			n++;
		}
	}
	return (n);
}
