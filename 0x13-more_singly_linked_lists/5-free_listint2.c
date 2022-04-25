#include "lists.h"

/**
 *free_listint2-free list of data
 *@head:hold pointer of the first data
 *Return:vide
 */
void free_listint2(listint_t **head)
{
listint_t *new;

if (*head == NULL)
return;

while (*head)
{
new = (*head)->next;
free(*head);
*head = new;
}
*head = NULL;
}
