#include <stdio.h>
#include <ctype.h>
/**
 *main-Entry pointer
 *Return:Always 0 (Success)
 */
int main(void)
{
  int i = 0;
  char ch[]="_putchar";
  while(isprint(ch[i]))
    {
      putchar(ch[i]);
      i++;
    }
  putchar('\n');
  return (0);
}
  
