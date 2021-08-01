#include "lists.h"

/**
 * free_list - Frees a list_t list
 * @head: Pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
