#include "main.h"
#include <string.h>
/**
 *rev_string-revers
 *@s:char
 *Return:void
 */
void rev_string(char *s)
{
int len = strlen(s);
int i;
char ch;
for (i = 0; i < len / 2; i++)
{
ch = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = ch;
}
}
