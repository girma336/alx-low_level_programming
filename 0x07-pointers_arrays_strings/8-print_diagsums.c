#include "main.h"
#include <stdio.h>
/**
 *print_diagsums- print sum of diagonals
 *@a:int
 *@size:int
 *Return:void
 */
void print_diagsums(int *a, int size)
{
int i, sum, sum2;
sum = 0;
sum2 = 0;
for (i = 0; i < size; i++)
{
sum += a[(size * i) + i];
sum2 += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", sum, sum2);
}
