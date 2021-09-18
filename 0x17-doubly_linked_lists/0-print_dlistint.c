#include "lists.h"

/**
 * print_dlistint - Print list.
 * @h: Pointer to the list
 *
 * Return: numbers of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
