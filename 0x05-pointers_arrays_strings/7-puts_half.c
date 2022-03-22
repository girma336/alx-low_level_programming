#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts_half- helf of the input
 *@str: shar;
 *Return:void.
 */
void puts_half(char *str)
{

int len = strlen(str);
int i, mid;
int n;
if (len % 2 == 1)
{
n = (len - 1) / 2;
for (i = n; i <= len - 1; i++)
{
putchar(str[i]);
}
}
else
{
mid = len / 2;
}
for (i = mid; i <= len - 1; i++)
{
putchar(str[i]);
}
putchar('\n');
}
