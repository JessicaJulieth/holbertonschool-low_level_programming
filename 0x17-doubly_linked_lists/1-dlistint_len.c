#include "lists.h"

/**
 * dlistint_len - Print len of list.
 * @h: Pointer to the list
 *
 * Return: len of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
