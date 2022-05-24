#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*header)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
