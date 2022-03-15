#include "main.h"
/**
 *print_sign- sign of number
 *@n: input.
 *Return: if n greter than 0 +
 *and 0 is equal to 0
 *-1 and print - if n<0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
