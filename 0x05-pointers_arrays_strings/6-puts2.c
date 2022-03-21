#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *puts2- every
 *@str:char
 *Retur:void.
 */
void puts2(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i++)
{
if (str[i] != ' ' && str[i] % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
