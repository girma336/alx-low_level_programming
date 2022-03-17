#include "main.h"
/**
 *print_most_numbers- print the num
 *Return: print a number 0 to 9 the number except 2 and 4
 */
void print_most_numbers(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
if ((ch == '2') || (ch == '4'))
{
continue;
}
_putchar(ch);
}
_putchar('\n');
}
