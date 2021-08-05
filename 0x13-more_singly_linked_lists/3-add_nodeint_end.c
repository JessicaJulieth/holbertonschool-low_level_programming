#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list
 * @head: Pointer
 * @n: Integer
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw = NULL;
	listint_t *ptr = NULL;

	nw = (listint_t *)malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);
	(*nw).n = n;
	(*nw).next = NULL;
	if (!*head)
	{
		(*nw).next = *head;
		*head = nw;
	}
	else
	{
		ptr = *head;
		while (ptr->next)
			ptr = (*ptr).next;
		(*ptr).next = nw;
	}
	return (nw);
}
