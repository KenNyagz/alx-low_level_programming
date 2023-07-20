#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_numbers - prints numbers fed as args
*@separator: string to be printed btn numbers
*@n: number of ints passed to the function
*@... : additional args
*Return: Void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
unsigned int num = 0;
va_list args;
va_start(args, n);


if (separator == NULL)
return;

for (i = 0; i < n; i++)
{
num = va_arg(args, unsigned int);
printf("%d", num);

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
