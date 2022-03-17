#include "main.h"
/**
 *_isupper- Entry point
 *Return:1 if c is uppercase
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
else
{
return (0);
}
ch++;
}
return (0);
}
