#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: Pointer
 * @n: data of teh linked list.
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);
	(*nw).n = n;
	(*nw).next = NULL;

	if ((*head) == NULL)
	{
		(*head) = nw;
		(**head).next = NULL;
	}
	else
	{
		(*nw).next = (*head);
		(*head) = nw;
	}
return (nw);
}
