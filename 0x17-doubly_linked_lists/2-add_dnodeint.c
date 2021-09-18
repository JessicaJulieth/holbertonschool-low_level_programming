#include "lists.h"

/**
 * add_dnodeint - Add node to the list.
 * @head: Pointer to the address to the node
 * @n: Pointer to the list
 *
 * Return: Node of the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head != NULL && *head != NULL)
	{

		dlistint_t *new = NULL;

		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->prev = NULL;
		new->next = *head;

		*head = new;

		return (new);

	}
	else if (head != NULL && *head == NULL)
	{
		dlistint_t *new = NULL;

		new = malloc(sizeof(dlistint_t));

		if (new == NULL)
		{
			return (NULL);
		}
		new->n = n;
		new->prev = NULL;
		new->next = NULL;

		*head = new;

		return (new);
	}

	return (NULL);
}
