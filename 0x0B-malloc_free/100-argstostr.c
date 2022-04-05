#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr-print the log
 *@ac:int
 *@av:char
 *Return:char
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
len++;
len++;
}
str = malloc(sizeof(char) * (len));
if (str == NULL)
return (NULL);
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
return (str);
}