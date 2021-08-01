#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head:Pointer
 * @str: String of new node
 * 
 * Return:The address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int x = 0;

	n = malloc(sizeof(list_t));
	
	if (n == NULL)
    {
    return (NULL); 
    }

	while (str[x] != '\0')
		x++;
	n->str = strdup(str);
	
	n->len = x;
	n->next = (*head);
	(*head) = n;
    {
    return (n);   
    }
}
