#include "lists.h"

/**
 *reverse_listint-print the reverse order
 *@head:pointer of first node
 *Return:listint
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *new = NULL;
listint_t *prv = NULL;

if (!head)
return (NULL);

while (*head)
{
new = (*head)->next;
(*head)->next = prv;
prv = *head;
*head = new;
}

*head = prv;
return (*head);
}

