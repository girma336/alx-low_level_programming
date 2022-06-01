#include "function_pointers.h"
/**
 *print_name-printthe name of input
 *@name:char
 *@f:pointer function
 */
void print_name(char *name, void (*f)(char *s))
{
if (!name || !f)
return;
f(name);
}
