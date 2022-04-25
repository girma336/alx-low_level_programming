#include "lists.h"

/**
 *add_nodeint-insert at the beginning of the list
 *@n:int
 *@head:head
 *Return:listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *tmp;
tmp = malloc(sizeof(listint_t));

if (tmp == NULL)
{
return (0);
}
tmp->n = n;
tmp->next = *head;
(*head) = tmp;
return (*head);
}
