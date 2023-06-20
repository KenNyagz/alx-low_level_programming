#include "main.h"

/**
*_isalpha - checks for alphabetic char
*@c:argument to be tested
*Return:0 if not letter;1 if otherwise
*/

int _isalpha(int c)
{
if (c >= 64 && c <= 90)
return (1);
else if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
