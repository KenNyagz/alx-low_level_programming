#include "main.h"

/**
*reverse_array - prints a string in reverse
*@a: the string
*@n: the no of elements in the array
*Return: void
*/

void reverse_array(int *a, int n)
{
int i, tmp;

for (i = 0; i < 2; i++)
{
tmp = a[i];
a[i] = a[n-1 - i]; 
a[n-1-i] = tmp;
}

}
