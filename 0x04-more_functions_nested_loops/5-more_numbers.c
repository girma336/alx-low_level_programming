#include "main.h"
/**
 *more_numbers- print 14 number
 *@void:
 *Return:the number 0 to 14
 */
void more_numbers(void)
{
int ch, i;
for (i = 0; i < 10; i++)
{
for (ch = 0; ch <= 14; ch++)
{
if (ch >= 10)

_putchar('0' + ch / 10);
_putchar('0' + ch % 10);

}
_putchar('\n');
}
}
