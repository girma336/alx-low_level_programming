#include "main.h"
/**
 *print_line-print line
 *@c: void.
 *Return: print number of _
 */
void print_line(int n)
{
char ch = 95;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (n > 0)
{
_putchar(ch);
n--;
}
_putchar('\n');
}
}
