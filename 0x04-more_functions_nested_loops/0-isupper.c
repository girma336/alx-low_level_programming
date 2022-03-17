#include "main.h"
/**
 *_isupper- Entry point.
 *@c: int.
 *Return:1 if c is uppercase
 *otherwise 0
 */
int _isupper(int c)
{
char ch = 'A';
while (ch <= 'Z')
{
if (c == ch)
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
