#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
#include <ctype.h>

/**
*main - Entry point
*Add positive numbers
*@argc: number of command line arguments
*@argv: array comprising command line arguments
*Return: 0
*/

int main(int argc, char *argv[])
{
int s = 0;
int i, j;
int n;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
n = atoi(argv[i]);
s += n;
}
printf("%d\n", s);

return (0);
}
