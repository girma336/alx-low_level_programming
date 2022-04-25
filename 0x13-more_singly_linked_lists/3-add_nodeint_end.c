#include "lists.h"

/**
 *add_nodeint_end-insert at the end of list
 *@n:int
 *@head:pointer of the list
 *Return:listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp;
listint_t *last;

tmp = malloc(sizeof(listint_t));
if (tmp == NULL)
printf("Error\n");

last = *head;

tmp->n = n;
tmp->next = NULL;

if (*head == NULL)
{
*head = tmp;
return (*head);
}
while (last->next != NULL)
{
last = last->next;
}
last->next = tmp;
return (last);
}
