#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
*print_all - function that prints anything
*@format: list of types of args passed to func
*@... : additional funtions
*Return: Void
*/

void print_all(const char * const format, ...)
{
int i, j;
float k;
char l;
char *s;
int len;
va_list args;
va_start(args, format);

len = strlen(format); 

i = 0;

while (i < len)
{

if (format[i] == 'i')
{
j = va_arg(args, int);
printf("%d", j);
}

if (format[i] == 'f')
{
k = va_arg(args, double);
printf("%f", k);
}

if (format[i] == 'c')
{
l = va_arg(args, int);
printf("%c", l);
}

if (format[i] == 's')
{
s = va_arg(args, char *);
printf("%s", s);
}

if (format == NULL)
printf("(nil)");

while (i < len -1)
{
printf(", ");
break;
}

i++;
}
va_end(args);
printf("\n");
}
