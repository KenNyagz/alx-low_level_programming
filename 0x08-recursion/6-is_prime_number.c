#include "main.h"

/**
*is_prime_number - checks if a number is a prime number
*@n: the number being checked
*Return: 1 if a prime number, 0 if otherwise
*/

int is_prime_number(int n)
{
return (prime(n, 1));
}

/**
*prime - check for prime number
*@n: the number to be checked
*@i: the number to check n
*Return: 1 if n is prime, 0 if not
*/

int prime(int n, int i)
{
if (n <= 1)
return (0);

if(n % i == 0 && i > 1)
return (0);

if (n / i < i)
return (1);

return (prime(n, i + 1));
}
