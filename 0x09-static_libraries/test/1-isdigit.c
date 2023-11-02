#include "main.h"

/**
  *_isdigit - starting point
  *@c: comparison character, if it is a digit
  *Return: 1 - if (int c) is a digit, 0 - if (int c) is not a digit
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
