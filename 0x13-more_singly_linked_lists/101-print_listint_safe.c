#include "lists.h"

/**
 *print_listint_safe-print the safe way
 *@head:pointer of the first node
 *Return:size_t
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
long int num;
while (head != NULL)
{
num = head - head->next;
count++;
printf("[%p] %d\n", (void *)head, head->n);
if (num > 0)
head = head->next;
else
{
printf("->[%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
return (count);
}
