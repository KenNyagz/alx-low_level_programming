#include "main.h"

/**
  *_isupper - starting point
  *@c: comparison character, if it ic uppercase
  *Return: 1 if (int c) is uppercase, 0 if (int c) is not uppercase
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
