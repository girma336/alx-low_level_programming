#include "main.h"
/**
 *_isdigit- Is digit or not
 *@c: char.
 *Return: if c is number
 */
int _isdigit(int c)
{
int ch = 48;
while (ch <= 57)
{
if (ch == c)
{
return (1);
}
return (0);
}
return (0);
}
