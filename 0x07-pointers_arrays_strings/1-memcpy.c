#include "main.h"
/**
 *_memcpy-the memset char
 *@dest:char
 *@src:char
 *@n:unsigned int
 *Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
