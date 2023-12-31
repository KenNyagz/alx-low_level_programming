#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point.Calculates number of coins req to make change
*@argc: no of arguments
*@argv: array of arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
int coins = 0, cents = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
coins++;
}
else if (cents >= 10)
{
cents -= 10;
coins++;
}
else if (cents >= 5)
{
cents -= 5;
coins++;
}
else if (cents >= 2)
{
cents -= 2;
coins++;
}
else
{
cents--;
coins++;
}
}
printf("%d\n", coins);
return (0);
}
