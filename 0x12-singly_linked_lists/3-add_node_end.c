#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: pointer
 * @str: String
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n = NULL;
	list_t *w = NULL;
	int x;

	n = malloc(sizeof(list_t));
if (n == NULL)
{
return (NULL);
}
	x = 0;
	while (str[x])
		x++;
	n->str = strdup(str);
	n->len = x;
	n->next = NULL;
	if (*head == NULL)
		*head = n;
	else
	{
		w = (*head);
		while (w->next != NULL)
		{
			w = w->next;
		}
		w->next = n;
	}
	return (n);
}
