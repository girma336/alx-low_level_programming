#include "main.h"
/**
 *_isupper- Entry point
 *@c: char
 *Return:1 if c is uppercase
 *else 0
 */
int _isupper(int c)
{
char ch = 'A';
while ( ch <= 'z')
{
if (ch == c)
{
return (1);
}
return (0);
ch++;
}
return (0);
}
