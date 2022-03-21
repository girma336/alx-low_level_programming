#include "main.h"
/**
 *_puts- character 
 *@str:char.
 *Return:the char
 */
void _puts(char *str)
{
  int len = 0;
 
  while (*str != '\0')
    {
      _puts(str);
      len++;
      
     
    }
    
}
