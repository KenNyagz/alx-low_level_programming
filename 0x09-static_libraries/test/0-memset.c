#include "main.h"

/**
  **_memset - starting point
  *@s: return value
  *@b: char
  *@n: unsigned int
  *Description: *_memset filling memory with a byte
  * Return: @s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
