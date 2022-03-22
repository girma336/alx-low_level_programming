#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *_atoi- convert string to num
 *@s:char
 *Return:always 0
 */
int _atoi(char *s)
{
  int num = atoi(s);
  int sign = 1;
  
  int i;
  for (i = 0; s[i] != '\0'; ++i)
    
    {
      if (s[i] == '-')
	{
	  sign = -1;
	  i++;
	}
    }
      return (sign * num);
    
    
  return (0);
}
