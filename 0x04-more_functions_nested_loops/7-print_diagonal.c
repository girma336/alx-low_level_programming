#include "main.h"
/**
 *print_diagonal- diagonal
 *@c: void.
 *Return: the diagonal of given input
 */
void print_diagonal(int n)
{
int ch = 92;
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar(ch);
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
