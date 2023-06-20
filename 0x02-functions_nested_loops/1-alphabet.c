#include "main.h"

/**
*print_alphabet - print the lower alphabet using our _putchar
*Return:Always 0
*/

void print_alphabet(void)

{
char c;
for (c = 97; c <= 122; c++)
{
_putchar(c);
}

_putchar('\n');

}
