#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
*op_add - adds two ints
*@a: first int
*@b: second int
*Return: sum of a and b
*/

int op_add(int a, int b)
{
return ((a) + (b));
}

/**
*op_sub - subtractss two ints
*@a: first int
*@b: second int
*Return: difference of a and b
*/

int op_sub(int a, int b)
{
return ((a) - (b));
}

/**
*op_mul - multiplies two ints
*@a: first int
*@b: second int
*Return: product of a and b
*/

int op_mul(int a, int b)
{
return ((a) * (b));
}

/**
*op_div - divides two ints
*@a: first int
*@b: second int
*Return: division of a against b
*/

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return ((a) / (b));
}

/**
*op_mod - divides two ints
*@a: first int
*@b: second int
*Return: remainder division of a against b
*/

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return ((a) % (b));
}
