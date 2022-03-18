#include "main.h"
/**
 *print_line-print_line.
 *@n: void.
 *n the number of input
 *Return:if n is greater than zero to print line of underscore
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
