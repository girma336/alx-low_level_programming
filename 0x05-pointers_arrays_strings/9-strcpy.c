#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 **_strcpy-copy the char
 *@dest:char
 *@src:char
 *Return:char
 */
char *_strcpy(char *dest, char *src)
{
int len = strlen(src);
int i;
for (i = 0; i <= len; i++)
dest[i] = src[i];
return (dest);
}
