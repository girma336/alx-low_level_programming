#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat-string concat(char
 *@s1:char
 *@s2:char
 *Return:char
 */
char *str_concat(char *s1, char *s2)
{
char *cat;
unsigned int i, j, k, m;
i = 0;
j = 0;
k = 0;
m = 0;
while (s1 && s1[i])
i++;
while (s2 && s2[j])
j++;
cat = malloc(sizeof(char) * (j + i + 1));
if (cat == NULL)
return (NULL);
if (s1)
{
while (k < i)
{
cat[k] = s1[k];
k++;
}
}
if (s2)
{
while (k < (j + i))
{
cat[k] = s2[m];
m++;
k++;
}
}
cat[k] = '\0';
return (cat);
}
