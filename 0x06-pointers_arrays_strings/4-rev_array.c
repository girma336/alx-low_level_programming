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
while (i < n / 2)
{
temp = a[i];
a[i] = a[n - 1 - i];

a[n - 1 - i] = temp;
i++;
}
}
