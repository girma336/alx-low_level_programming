#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range-print the the range
 *@min:int
 *@max:int
 *Return:int
 */
int *array_range(int min, int max)
{

int *ar;
int i, size;
if (min > max)
return (NULL);
size = max - min + 1;
ar = malloc(sizeof(int) * size);
if (ar == NULL)
return (NULL);
for (i = 0; min <= max; i++)
{
ar[i] = min++;
}
return (ar);
}
