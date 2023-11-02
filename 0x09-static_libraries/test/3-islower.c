#include "main.h"
/**
  *_islower - starting point
  *@c: comparison character, if it is a lowercase
  *Return: 1 - if (int c) is lowercase, 0 - if (int c) is not lowercase
  */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
