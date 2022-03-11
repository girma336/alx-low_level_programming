#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Always 0 (Success)
 */
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar(ch);
ch--;
}
printf("\n");
return (0);
}
