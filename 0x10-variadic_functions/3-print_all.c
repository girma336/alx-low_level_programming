#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 *print_all-prit all data type inputs
 *@format:int
 */
void print_all(const char * const format, ...)
{
char *str = NULL;
char c;
int i;
va_list ap;
va_start(ap, format);
 
while (format[i] != '\0')
{
c = format[i];
if (i != 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
printf(", ");
switch (c)
{
case 'c':
printf("%c", va_arg(ap, int));
break;
case 'i':
printf("%d", va_arg(ap, int));
break;
case 'f':
printf("%f", va_arg(ap, double));
break;
case 's':
str = va_arg(ap, char *);
  
if (str == NULL)
{
printf("(nil)");
continue;
}
printf("%s", str);
break;
}
i++;
}
printf("\n");
va_end(ap);
}
