#include "main.h"
/**
 *swap_int-swap the number
 *@a:int
 *@b:int
 *return: the swap value
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
