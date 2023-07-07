#include "main.h"
#include <stdio.h>

/**
*main - entry point
*prints no of arguments passed into it
*@argc: no of command line arguments
*@argv: the arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);

}
