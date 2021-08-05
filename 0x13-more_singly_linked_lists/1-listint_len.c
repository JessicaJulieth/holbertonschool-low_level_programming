#include "lists.h"
/**
 * listint_len - find number of elements in a listint_t list
 * @h: Pointer
 * Return: Number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *aux;
	size_t n;

	aux = h;
	n = 0;

	while (aux)
	{
		n++;
		aux = aux->next;
	}
	return (n);
}