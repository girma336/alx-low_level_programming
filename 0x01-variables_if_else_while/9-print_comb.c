#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Alwats 0 (Success)
 */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
printf("\n");
return (0);
}

