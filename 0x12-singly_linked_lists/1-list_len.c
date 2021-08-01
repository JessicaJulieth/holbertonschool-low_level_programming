#include "lists.h"
/**
 * list_len - Print number of element in the list
 * @h: pointer to structure
 *
 * Return: The number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	int n;

	n = 0;
	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
