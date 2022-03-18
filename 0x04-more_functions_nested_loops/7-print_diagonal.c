#include "main.h"
/**
 *print_diagonal- diagonal
 *@n:int.
 *Return: the diagonal of given input
 *when n is less and equal to zero print new line
 */
void print_diagonal(int n)
{
int ch = 92;
int i, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == j)
{
_putchar(ch);
}
else if (j < i)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
