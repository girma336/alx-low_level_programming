#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *print_number-print the intger number
 *@n:int
 *Return:void
 */
void print_number(int n)
{
unsigned int m;

if (n < 0)
{
m = -n;

_putchar('-');
}
else
m = n;

if (m / 10)
print_number(m / 10);

_putchar((m % 10) + '0');
}
