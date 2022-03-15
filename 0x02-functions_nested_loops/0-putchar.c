#include "main.h"
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
_putchar(ch[i]);
i++;
}
_putchar('\n');
return (0);
}
  
