#include "main.h"
/**
 *print_times_table - n times table.
 *@n: the number defines the table.
 *
 *Return: no return value
 */
void print_times_table(int n)
{
int i, k, product;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (k = 0; k <= n; k++)
{
product = i * k;
if (k == 0)
{
_putchar(product + '0');
}
else if (product < 10 && k != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else if (product >= 10 && product < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
else if (product >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((product / 100) + '0');
_putchar(((product / 10) % 10) + '0');
_putchar((product % 10) + '0');
}
}
_putchar('\n');
}
}
}

