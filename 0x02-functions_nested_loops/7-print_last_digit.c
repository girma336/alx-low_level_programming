#include "main.h"
/**
 *print_last_digit- print the last digit numbre
 *@n: input.
 *Return:the value of last digit
 */
int print_last_digit(int n)
{
int l;
if (n >= 0)
{
l = n % 10;
}
else
{
  l = (n % 10) * -1;
}
_putchar('0' + l);
return (l);
}  
