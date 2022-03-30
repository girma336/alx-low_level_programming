#include "main.h"

int _sqrt(int n, int i);
/**
 *_sqrt_recursion-print the sqruare root of n
 *@n:int
 *Return: 0
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (_sqrt(n, 0));
}
/**
 *_sqrt-print two num
 *@n:int
 *@i:int
 *Return:0
 */
int _sqrt(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
