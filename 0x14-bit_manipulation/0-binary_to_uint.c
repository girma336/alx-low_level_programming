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
int c;
unsigned int val = 0;


if (b == NULL)
return (0);

for (c = 0; b[c]; c++)
{
if (b[c] < '0' || b[c] > '1')
return (0);
val = 2 * val + (b[c] - '0');
}
return (val);
}
