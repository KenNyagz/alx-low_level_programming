#include "main.h"

/**
  * _strpbrk - starting point
  *@s: pointer 1
  *@accept: pointer 2
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	int d, f;
	char *z;

	d = 0;
	while (s[d] != '\0')
	{
		f = 0;
		while (accept[f] != '\0')
		{
			if (accept[f] == s[d])
			{
				z = &s[d];
				return (z);
			}
			f++;
		}
		d++;
	}
	return (0);
}
