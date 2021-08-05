#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: Pointer
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t i;
for (i = 0; h != NULL; i++)
{
if (h->str == NULL)
{
printf("[0] (nil");
}
else
{
printf("[%i] %s, h->len, h->str");
}
h = h->next;
}
return (i);
}
