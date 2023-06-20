#include "main.h"

/**
*_islower - checks for lowercase character
*@c: is argument to be tested
*Return: 0 if c is lower case; 1 if not
*
*/

int _islower(int c)
{

if (c > 97 && c < 122)
return (1);
else

return (0);
}

