#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Always 0 (success)
 */
int main(void)
{
char n = '0';
char ch = 'a';
while (n <= '9')
{
putchar(n);
n++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
printf("\n");
return (0);
}
