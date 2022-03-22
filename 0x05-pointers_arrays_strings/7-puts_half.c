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

if (len % 2 != 0)
len -= 1;
mid = len / 2;
for (i = mid; i <= len - 1; i++)
{
putchar(str[i]);
}
putchar('\n');
}
