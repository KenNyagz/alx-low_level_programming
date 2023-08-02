#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdarg.h>
#include "main.h"

/**
*is_positive_num - checks if inputed strigna rgument is a number
*@str: string input
*Return: 0 if there is a non digit input, 1 of otherwise
*/

int is_positive_num(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
	str++;
	}
return (1);
}

/**
*main - entry point
*multiplies command line arguments
*@argc: number of arguments
*@argv: array of the aarguments input
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
int num1, num2;
if (argc != 3)
{
	printf("Error\n");
	return (98);
}

if (!is_positive_num(argv[1]) && !is_positive_num(argv[2]))
{
	printf("Error\n");
	return (98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", (num1) * (num2));
return (0);
}
