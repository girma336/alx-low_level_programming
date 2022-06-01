#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name-print name using function pointer
 *@name:char
 *@f:function pointer char
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
