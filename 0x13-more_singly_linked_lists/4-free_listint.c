#include "lists.h"

/**
 *free_listint-free the list of the num
 *@head:list
 *Return:void
 */
void free_listint(listint_t *head)
{
listint_t *new;

while (head)
{
new = head->next;
free(head);
head = new;
head = new;
}
}
