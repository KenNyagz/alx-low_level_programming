#include "main.h"
#include <stdio.h>

/**
*main - entry point
*Function prints all arguments passed onto it
*@argc: number of command line arguments passed
*@argv: array of arguments passed
*Return: (0) success
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
