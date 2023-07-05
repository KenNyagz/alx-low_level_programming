#include "main.h"

/**
*factorial - returns factorial of a given number.
*@n: the number
*Return: the factorial for n;-1 if n < 0; 1 if n==0
*/

int factorial(int n)
{

if (n < 0)
return (-1);

if (n == 0)
return (1);

return (n * factorial(n - 1));
}
