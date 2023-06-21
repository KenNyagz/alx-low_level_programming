#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@i:int to be cheked for last digit
**Return:i
*/

int print_last_digit(int i)
{
int j;

if (i < 0)
i =  i * -1;
j = (i % 10);

if (j < 10)
j = j * -1;
_putchar(i + '0');
return (i);
}
