#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint- print the integer number
 *@h:int
 *Return:size_t
 */
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);

i++;
h = h->next;
}

return (i);
}
