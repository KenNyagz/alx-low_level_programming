#include "main.h"

/**
*print_numbers - prints 0 - 9
*@i: automatic var to initiate print
*return: void
*/

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
} 
_putchar('\n');
}
