#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    if (head == NULL) {
        return NULL;
    }

    if (*head == NULL) {
        dlistint_t *new = NULL;

        new = malloc(sizeof(dlistint_t));

        if (new == NULL) {
            return NULL;
        }
        new->n = n;
        new->prev = NULL;
        new->next = NULL;

        *head = new;

        return new;
    } else {
    /* Recorrer hasta llegar a NULL */
        dlistint_t *temp = *head;
        dlistint_t *new = NULL;

        while(temp != NULL) {

            if (temp->next == NULL) {
                break;
            }
            temp = temp->next; 
        }
        new = malloc(sizeof(dlistint_t));

        if (new == NULL) {
            return NULL;
        }
        new->n = n;
        new->prev = temp;
        new->next = NULL;
        temp->next = new;

        return new;
    }
}