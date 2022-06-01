#include "function_pointers.h"
/**
 *print_name-printthe name of input
 *@name:char
 *@s:pointer function
 */
void print_name(char *name, void (*f)(char *s))
{
  f(name);
}
