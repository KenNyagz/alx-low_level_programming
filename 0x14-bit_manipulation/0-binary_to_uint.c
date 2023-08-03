#include "main.h"

/**
*binary_to_uint - converts binary number to unsigned int
*@b: pointing to a string of 0 and 1 chars
*Return: Converted number(decimal)
*/

unsigned int binary_to_uint(const char *b)
{
int num, rem;
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
b++;


while (*b != '\0')
b--;
b--;
while (*b != '\0')
{
if (*b != '1' && *b != '0')
{
return (0);
}

num = *b - '0';
rem = num % 2;
result = (result << 1) | rem;
b--;
}
return (result);
}
