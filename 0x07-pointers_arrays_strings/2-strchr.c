#include "main.h"
#include <stdio.h>
/**
 *_strchr-changed string to char
 *@s:char
 *@c:char
 *Return:char
 */
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
{
return (s);
}
if (!*s)
{
return (NULL);
}
}
return (NULL);
}
