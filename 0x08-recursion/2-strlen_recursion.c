#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *_strlen_recursion-print the lenght of string
 *@s:char
 *Return:int
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + (_strlen_recursion(s + 1)));
}
