#include "main.h"
/**
 *flip_bits-flip bits
 *@n:int
 *@m:int
 *Return:unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, count = 0;
unsigned long int new;
unsigned long int exc = n ^ m;
for (i = 63; i >= 0; i--)
{
new = exc >> i;
if (new & 1)
count++;
}
return (count);
}
