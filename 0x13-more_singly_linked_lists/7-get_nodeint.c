#include "lists.h"

/**
 *get_nodeint_at_index-print Nth Node
 *@head:pointer of first node
 *@index:int
 *Return:listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *current = head;

while (current && count < index)
{

current = current->next;

count++;
}
return (current ? current : NULL);
}
