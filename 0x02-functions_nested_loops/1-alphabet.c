#include "main.h"

/**
*main - entry point
*print the lower alphabet using our _putchar
*function in the header
*Return:Always 0
*/

void print_alphabet(void)
/**
*add C
*
*Return: void
*/
{
char c;
for (c = 97; c <= 122; c++)
{
_putchar(c);
}

_putchar('\n');

}
