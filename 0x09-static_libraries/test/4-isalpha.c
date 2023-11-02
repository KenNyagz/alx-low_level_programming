#include "main.h"
/**
  *_isalpha - starting point
  *@c: comparison character, if it is an alphabetic character
  *Return: 1- if c is uppercase or lowercase, 0- if otherwise
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
