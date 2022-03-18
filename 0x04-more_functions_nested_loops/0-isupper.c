#include "main.h"
#include <stdio.h>
/**
 *_isupper- Entry point.
 *@c: int.
 *Return:1 if c is uppercase
 *otherwise 0
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
return (0);
}
