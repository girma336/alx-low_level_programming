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
  int i, c;
  int len = strlen(s);
  for (i = 0; i < len / 2; i++)
{
c = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = c;
}  
  puts(s);   
}
