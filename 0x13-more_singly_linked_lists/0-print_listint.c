#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
