#include "lists.h"

/**
 * free_listint - Frees all nodes from a list.
 * @head: points to the first node.
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
listint_t *aux;
while (head != NULL)
{
aux = (*head).next;
free(head);
head = aux;
}
}
