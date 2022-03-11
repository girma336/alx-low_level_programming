#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * Return:Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char cp = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (cp <= 'Z')
{
putchar(cp);
cp++;
}
printf("$\n");
return (0);
}
