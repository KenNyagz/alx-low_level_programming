#include "main.h"

/**
*_islower - checks for lowercase character
*Return: 0 if c is lower case; 1 if not
*
*/

int _islower(int c);
{
/**
*_islower: check for alphabet case
*add c is argument
*add 97 is small 'a'
*add 122 is small 'z'
*return:1 if lower; 0 if otherwise
*/
if (c > 97 && c < 122)
return (1);
else
return (0);
}

