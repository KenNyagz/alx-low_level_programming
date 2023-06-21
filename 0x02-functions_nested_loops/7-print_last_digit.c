#include "main.h"

/**
*print_last_digit - prints the last digit of a number
*@i:int to be cheked for last digit
*@j:modulo for i
*@k: to be returned
*Return:k
*/

int print_last_digit(int i)
{
int j;
int k;

j = i % 10;
k = _putchar(j + '0');
return (k);
}
