#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *infinite_add-add number
 *@n1:char
 *@n2:char
 *@r:char int
 *@size_r:int
 *Return:char
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i = 0, j = 0, k = 0;
  unsigned int sum;

  while (n1[i] != '\0')
    {
      n1[i] = n1[i];
      i++;
    }
  while (n2[j] != '\0')
    {
      n2[j] = n2[j];
      j++;
    }
   sum = atoi(n1) + atoi(n2);
  
  while (r[k] != '\0')
    k++;
  if (k == size_r)
    return (sum);
}
