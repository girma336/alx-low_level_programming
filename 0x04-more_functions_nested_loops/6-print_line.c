#include "main.h"
/**
 *print_line-print line
 *
 *Return:print number of
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
