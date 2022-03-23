#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 *string_toupper-change to uppe char 
 *Return:char
 */
char *string_toupper(char *)
{
unsigned long int s_len = strlen(s); 
    char s_up[s_len]; 
    int a;
    for (a = 0; a < s_len; a++)
    {
        
        s_up[a] = toupper(s[a]); 
    }
    s = s_up;

    printf("%s \n", s_up);
}
