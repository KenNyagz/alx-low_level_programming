#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@i:int to be cheked for last digit
**Return:i
*/

int print_last_digit(int i)
{
if (i < 0)
i =  i * -1;
i = (i % 10);
return (i);
}
