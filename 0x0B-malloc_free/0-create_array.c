#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array- create array unsigned int
 *@size:unsigned int
 *@c:char
 *Return:char
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i = 0;
if (size == 0)
return (NULL);
ar = (char *) malloc(size * sizeof(char));
if (ar == NULL)
return (0);
while (i < size)
{
*(ar + i) = c;
i++;
}
*(ar + i) = '\0';
return (ar);
}
