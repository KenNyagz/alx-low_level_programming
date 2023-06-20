#include "main.h"

/**
*main - entry point
*print the lower alphabet using our _putchar
*function in the header
*Return:Always 0
*/

int main(void)
{
int c;
for (c = 97; c <= 122; c++)
{
_putchar(c);
}

_putchar('\n');


return (0);
}
