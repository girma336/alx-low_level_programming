#include <unistd.h>
/**
 *main-Entry point
 *Return:Always 1 (Success)
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

