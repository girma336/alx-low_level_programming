#include "lists.h"

/**
 *sumOf-print the sum of the
 *@head:pointer of the first node
 *@sum:pointer of sum
 *Return:int
 */

void sumOf(listint_t *head, int *sum)
{
if (!head)
return;
sumOf(head->next, sum);
*sum = *sum + head->n;
}
/**
 *sum_listint-print the sum of all list
 *@head:pointer
 *Return:int
 */

int sum_listint(listint_t *head)
{
int sum = 0;
sumOf(head, &sum);
return (sum);
}
