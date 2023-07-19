#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
*get_up_func - returns a pointer to an operation function
*@s: operation specifier
*@a: first int for mathematical operation
*@b: second int for mathematical operation
*Return: Pointer to function with operation definition
*/

int (*get_op_func(char *s))(int a, int b)
{

/**
*ops[] - struct with fuction pointers
*@+: first operation with identifier
*@-: second operation with identifier
*@*: third operation with identifier
*@/: fourth operation with identifier
*@%: fifth operation with identifier
*@NULL: Return NULL for no matching identifier
*Description: struct of function pointer with their identifiers
*/

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
return (NULL);
}
