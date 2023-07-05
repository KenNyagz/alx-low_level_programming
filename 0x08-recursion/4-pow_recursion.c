#include "main.h"

/**
*_pow_recursion - raises x to the power of y
*@x: the base number
*@y: the power
*Return: x raised to power y, -1 if y <0
*/

int _pow_recursion(int x, int y)
{

if (y < 0)
return (-1);
if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));

}
