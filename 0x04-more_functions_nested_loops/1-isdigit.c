#include "main.h"
/**
 *_isdigit- Is digit or not
 *@c: char.
 *Return: if c is number
 */
int _isdigit(int c)
{
char ch = '0';
while (ch <= '9')
{
if (ch == c)
{
return (1);
}
else
{
return (0);
}
}
return (0);
}
