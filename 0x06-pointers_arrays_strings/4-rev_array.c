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
int i, t;
i = 0;
n--;
while (i < n)
{
t = a[i];
a[i] = a[n];

a[n] = t;
i++;
n--;
}
}
