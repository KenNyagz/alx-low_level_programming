#include "3-calc.h"
#include <stdio.h>
#include <string.h>


/**
*get_op_func - returns a pointer to an operation function
*@s: operation specifier
* first int for mathematical operation
*second int for mathematical operation
*Return: Pointer to function with operation definition
*/

int (*get_op_func(char *s))(int a, int b)
{

op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL)
{
if (strcmp(s, ops[i].op) == 0)
return (ops[i].f);
i++;
}
return (0);
}
