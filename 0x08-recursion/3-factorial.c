#include "main.h"
#include <stdio.h>
/**
 *factorial-print the factorial of n
 *@n:int
 *Return:int
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
