#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *print_rev-text
 *@str:char
 *Return:void.
 */
void print_rev(char *s)
{
  char* word_begin = s;
 
    // Word boundary
    char* temp = s;
 
    // Reversing individual words as
    // explained in the first step
    while (*temp) {
        temp++;
        if (*temp == '\0') {
            reverse(word_begin, temp - 1);
        }
        else if (*temp == ' ') {
            reverse(word_begin, temp - 1);
            word_begin = temp + 1;
        }
    }
 
    // Reverse the entire string
    reverse(s, temp - 1);
}
    
}
