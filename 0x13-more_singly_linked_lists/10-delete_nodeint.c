#include "lists.h"

/**
 *delete_nodeint_at_index-delete the nht node
 *@head:pointer of first node
 *@index:unsigned int
 *Return:int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = NULL;
listint_t *new = *head;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(new);
return (1);
}
while (count < index - 1)
{
if (!new || !(new->next))
return (-1);
new = new->next;
count++;
}
current = new->next;
new->next = current->next;
free(current);
return (1);
}
