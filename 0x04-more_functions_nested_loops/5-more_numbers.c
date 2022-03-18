#include "main.h"
/**
 *more_numbers- print 14 number
 *@void:
 *Return:the number 0 to 14
 */
void more_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
_putchar(ch);
}
for (ch = 48; ch <= 52; ch++)
{
_putchar('1');
_putchar(ch);
}
printf('\n');
}
