#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>

/**
 *string_toupper-change to uppe char
 *@str:char
 *Return:char
 */
char *string_toupper(char *str)
{
char ch;
int i = 0;
while (str[i])
{
ch = str[i];
str[i] = (toupper(ch));
i++;
}
return (str);
}
