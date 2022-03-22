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
for (i = 0; i < len && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < len ; i++)
dest[i] = '\0';
return (dest);
}
