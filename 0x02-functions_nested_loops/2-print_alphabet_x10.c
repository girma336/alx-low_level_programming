#include "main.h"
/**
 *print_alphabet- abcd
 *Description: print lowercase letter
 *Return: Void .
 */
void print_alphabet_x10(void)
{
char ch[26] = "abcdefghijklmnopqrstuvwxyz";
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(ch[j]);
}
_putchar('\n');
}
}
