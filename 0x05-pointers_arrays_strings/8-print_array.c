#include "main.h"
#include <stdio.h>

/**
*print_array - print x number of elements in array
*		separated by commsa
*@a: the string
*@n: int to determine x
*Return: Void
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < (n - 1); i++)
printf("%d, ", a[i]);

if (i == (n - 1))
printf("%d", a[n - 1]);

printf("\n");
}
