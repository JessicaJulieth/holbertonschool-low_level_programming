#include "lists.h"
/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
listint_t *aux;

if (head != NULL)
{
while (*head != NULL)
{
aux = *head;
*head = (**head).next;
free(aux);
}
free(*head);
*head = NULL;
}
}
