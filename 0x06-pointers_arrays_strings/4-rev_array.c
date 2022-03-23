#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
char temp;

i = 0;
while (i < n)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
if (i != 0)
{
printf(", ");
}
if (i < (n / 2))
printf("%d", a[i]);
else
printf("%d", a[n - i - 1]);
i++;
}
printf("\n");
}
