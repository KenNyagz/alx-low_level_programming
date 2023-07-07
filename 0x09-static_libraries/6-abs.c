#include "main.h"

/**
  *_abs - computes the absolute value of an integer
  *@b: checks the value of absolute number
  *Return: The specified absolute value
  */

int _abs(int b)
{
	int abslt;

	if (b < 0)
	{
		abslt = (b * -1);
		return (abslt);
	}
	return (b);
}
