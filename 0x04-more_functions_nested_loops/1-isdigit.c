#include "main.h"

/**
*_isdigit - check for digits
*@c:char value being checked
*Return: 1 if digit, 0 if not
*/

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
return (0);

}
