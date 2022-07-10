#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of list
 * @n: integer for the new node to contain
 * Return: NULL on failure else the address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev =  *head;
new->next = NULL;

if (*head != NULL)
(*head)->next =  new;
*head = new;

return (new);
}
