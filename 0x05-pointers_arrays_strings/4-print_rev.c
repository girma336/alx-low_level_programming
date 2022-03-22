#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev-text
 *@str:char
 *Return:void.
 */
void print_rev(char *s)
{
  int len = strlen(s);
  int i;
  for (i = len - 1; i >= 0; i--)
    {
      if (s[i] == ' ')
	{
	s[i] = '\0';
	printf("%s ", &(s[i]) + 1);
	}
    
      putchar(s[i]);
	 }
}
