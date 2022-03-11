#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Always 0 (Success)
 */
int main(void)
{
int n = rand();

printf("%d", n % 100);
if (n > 0)
{
printf(" is positive\n");
}
else if (n == 0)
{
printf(" is zero\n");
}
else
printf(" is negative\n");
return (0);
}
