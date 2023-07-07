#include "main.h"
#include "_putchar.c"
#include <stdio.h>
#include <string.h>

/**
*main -entry point
*function prints its name
*@argc:  argument count
*@argv: argument array
*Return: 0
*/

int main(int argc, char *argv[])
{

unsigned long int j;
(void) argc;

for (j = 0; j < strlen(argv[0]); j++)
_putchar(*argv[0]);
_putchar('\n');
return (0);

}
