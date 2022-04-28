#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *binary_to_uint-print decimal number
 *@b:unsigned int
 *Return:unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int k = 1;
unsigned int i = 0;
int c;
unsigned int len = 0;

while (b[len])
len++;

if (b == NULL)
return (0);

for (c = len - 1; c >= 0; c--)
{
if (b[c] < '0' || b[c] > '1')
return (0);

if (b[c] == '1')
{
i = i + k;
}
k *= 2;
}
return (i);
}
