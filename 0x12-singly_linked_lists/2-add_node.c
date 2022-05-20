#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of a singly linked list
 * @str: string
 * Return:  the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *phiona;
size_t nchar;

phiona = malloc(sizeof(list_t));
if (phiona == NULL)
return (NULL);

phiona->str = strdup(str);

for (nchar = 0; str[nchar]; nchar++)
;

phiona->len = nchar;
phiona->next = *head;
*head = phiona;

return (*head);
}

