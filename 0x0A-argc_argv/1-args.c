#include <stdio.h>
/**
 *main-Entry point
 *@argc:int
 *@argv:char
 *Return:int
 */
int main(int argc, char *argv[])
{
int count = 0;
while (count < argc)
{
if (argv[count])
{
count++;
}
}
printf("%d\n", argc - 1);
return (0);
}
