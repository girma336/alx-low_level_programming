#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *cap_string- capitalization of string
 *@str:char
 *Return:char
 */
char *cap_string(char *str)
{
char ch;
char lt[13] = {' ', '\t', '\n', '!', '?', '"',
	     '{', '}', '(', ')', '.', ',', ';'};
int j, i;
for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
{
ch = str[i];
str[i] = (toupper(ch));
}
for (j = 0; j < 13; j++)
{
if (str[i] == lt[j])
{
if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
{
ch = str[i + 1];
str[i + 1] = (toupper(ch));
}
}
}
}
return (str);
}
