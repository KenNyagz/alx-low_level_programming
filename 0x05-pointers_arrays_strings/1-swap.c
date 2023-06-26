#include "main.h"

/**
*swap_int - swaps the values of 2 ints
*@a: first int
*@b: second int
*Return: void
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
