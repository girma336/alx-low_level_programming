#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strspn-span the number
 *@s:char
 *@accept:char
 *Return:unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j, n, count;
count = 0;

for (i = 0; s[i] != '\0'; i++)
{
n = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
count++;
n = 1;
}
}
if (n == 0)
{
return (count);
}
}
return (0);
}
