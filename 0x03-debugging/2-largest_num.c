#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a < b && b < c)
{
largest = c;
}
else if (a < b && b > c)
{
largest = b;
}
else if (a > b && b < c)
{
if (a > c)
largest = a;
else
largest = c;
}
else if (a < b && b > c)
{
largest = b;
}
else if (a > b && b < c)
{
largest = a;
}
else
largest = a;
return (largest);
}

