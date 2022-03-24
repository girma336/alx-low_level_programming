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
int i = 0;
while (str[i] != '\0')
{
if (i == 0)
{
ch = str[i];
str[i] = (toupper(ch));

}
if (str[i] == '.' || str[i] == ' ' || str[i] == '(' || str[i] == ')' || str[i] == '}' || str[i] == '{' || str[i] == '"' || str[i] == ';' || str[i] == ',' || str[i] == '!' || str[i] == 11 || str[i] == 9 || str[i] == '?')
{
++i;
if (str[i] >= 'a' && str[i] <= 'z')
{
ch = str[i];
str[i] = (toupper(ch));
}

else
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
ch = str[i];
str[i] = (tolower(ch));

}
}
}
i++;
}
return (str);
}
