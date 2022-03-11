#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Alwats 0 (Success)
 */
int main(void)
{
unsigned char num = '0';
while (num <= '9')
{
putchar(num);
printf(", ");
num++;
}
printf("\n");
return (0);
}

