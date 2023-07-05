#include "main.h"

/**
*_sqrt_recursion - return the square root of an int
*@n: the number
*Return: the square root of n
*/

int _sqrt_recursion(int n)
{

return (ntrl_sqrt(n, 1));

}

/**
*ntrl_sqrt - finds natural square root of a number
*@n: the base number
*@i: number to check natutal square root
*Return: natural square root
*/

int ntrl_sqrt(int n, int i)
{
int sq = i * i;
if (sq > n)
return (-1);

if (sq == n)
return (i);

return (ntrl_sqrt(n, i + 1));
}
