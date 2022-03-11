#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
{
ch++;	
continue;
}
putchar(ch);
ch++;
}
printf("\n");
return (0);
}
