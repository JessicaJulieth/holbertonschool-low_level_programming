#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer
 *
 * Return: If the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *aux;
	int x;

	aux = *head;
	x = 0;

	if (*head)
	{
		*head = (*head)->next;
		x = aux->n;
		free(aux);
	}

	return (x);
}
