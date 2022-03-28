#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *leet-chenge the mode
 *@s:char
 *Return:char
 */
char *leet(char *s)
{
char *ch = "aAeEoOtTlL";

char *le = "4433007711";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (s[i] == ch[j])
{
s[i] = le[j];
}
}
}
return (s);
}
