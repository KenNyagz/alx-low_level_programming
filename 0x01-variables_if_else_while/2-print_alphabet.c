#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *Prints alphabet in lower case
 * Return: always 0 (Success)
 */

int main(void)
{

char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');

return (0);

}
