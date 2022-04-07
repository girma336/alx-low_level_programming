#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *string_nconcat-print concatinat string
 *@s1:char
 *@s2:char
 *@n:unsigned int
 *Return:char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s3;
unsigned int i = 0, j = 0, l1 = 0, l2 = 0;
while (s1[l1])
l1++;
while (s2[l2])
l2++;
if (n < l2)
s3 = malloc(sizeof(char) * (l1 * n));
else
s3 = malloc(sizeof(char) * (l1 * l2));
if (s3 == NULL)
return (NULL);

while (i < l1)
{
s3[i] = s1[i];
i++;
}
while (i < l1)
{
s3[i] = s1[i];
i++;
}
while (n < l2 && i < (l1 + n))

s3[i++] = s2[j++];

while (n >= l2 && i < (l1 + l2))
s3[i++] = s2[j++];

s3[i] = '\0';
return (s3);
}
