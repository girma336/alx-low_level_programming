#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_memset-with constant bytechar
 *@s:char
 *@b:char
 *@n:unsigned int
 *Return:char
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
