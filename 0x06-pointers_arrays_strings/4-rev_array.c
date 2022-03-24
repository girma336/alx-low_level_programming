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
n--;
while (i < n / 2)
{
temp = a[i];
a[i] = a[n - i];

a[n - i] = temp;
i++;
}
}
