#include "main.h"
#include <stdio.h>

/**
 *rot13-print the encode string
 *@s:char
 *Return:char
 */
char *rot13(char *s)
{
int i, j;
char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; c[j] != '\0'; j++)
{

if (s[i] == c[j])
{
s[i] = d[j];
break;
}
}
}
s[i] = '\0';
return (s);
}
