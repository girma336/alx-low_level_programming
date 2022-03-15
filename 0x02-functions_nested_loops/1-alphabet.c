#include "main.h"
void print_alphabet(void)
{
char ch[26] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
while (i < 26)
{
_putchar(ch[i]);
i++;
}
_putchar('\n');
}
