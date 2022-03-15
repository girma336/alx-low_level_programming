#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
_putchar(ch[i]);
i++;
}
_putchar('\n');
}
