#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 *main-input from argument
 *@argc:int
 *@argv:char
 *Return:int
 */

int main(int argc, char *argv[])
{
int i, j, result;
char o;
int (*func)(int, int);
if (argc < 4 || argc > 4)
{
printf("Error\n");
exit(98);
}

i = atoi(argv[1]);
j = atoi(argv[3]);
func = get_op_func(argv[2]);

if (!func)
{
printf("Error\n");
exit(99);
}
o = *argv[2];

if ((o == '/' || o == '%') && j == 0)
{
printf("Error\n");
exit(100);
}

result = func(i ,j);
printf("%d\n", result);
return (0);
}

