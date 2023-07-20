#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - Prints strings fed to function
*@separator: string literal to separate argument strings
*@n: number of strings passed to the function
*@... : additional arguments
*Return: Void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *str = "\0";
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);

if (str == NULL)
printf("(nil)");

else
printf("%s", str);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
