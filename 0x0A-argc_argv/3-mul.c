#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
*main - entry point
*Multiplies two numbers
*@argc: number of command line arguments
*@argv: array of command line arguments
*Return: 0 
*/

int main(int argc, char *argv[])
{
int i = 0;
int j = 0;

if (argc != 3)
{
printf("Error\n");
return (1);
}

else
i = atoi(argv[1]);
j = atoi(argv[2]);

printf("%d\n", (i*j));
return (0);
}
