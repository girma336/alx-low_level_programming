#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *count_words- count the word
 *@s:char
 *Return:int
 */
int count_words(char *s)
{
int f, c, w;
f = 0;
w = 0;
for (c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
f = 0;
else if (f == 0)
{
f = 1;
w++;
}
}
return (w);
}




/**
 *strtow-print the splite word char
 *@str:char
 *Return:char
 */
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, w, c = 0, s, e;
while (*(str + len))
len++;
w = count_words(str);
if (w == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (w + 1));
if (matrix == NULL)
return (NULL);

for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
e = i;

tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == 0)
return (NULL);
while (s < e)

*tmp++ = str[s++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
s = i;
}
matrix[k] = NULL;
return (matrix);
}
