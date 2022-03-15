#include "main.h"
/**
 *_abs-print the absolut value
 *@n: input
 *Return: absolut value
 */
int _abs(int n)
{
if (n>0)
{
n *= 1;
}
else if (n == 0)
{
n = 0;
}
else {
n *= -1;
}
 return (n);
}
