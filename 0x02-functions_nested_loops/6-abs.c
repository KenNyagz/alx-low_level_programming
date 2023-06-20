#include "main.h"

/**
*_abs - returns absolute value of a number
*@i: int checked
*Return: i or i negated if negative number
*/

int _abs(int i)
{

if (i < 0)
{
i = (i * -1);
return (i);
}
else
return (i);
}
