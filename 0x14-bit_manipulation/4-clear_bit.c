#include "main.h"

/**
 *clear_bit=clear bit
 *@n:int
 *@index:int
 *Return:int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
