#include "main.h"

/**
  * _strspn - starting point
  *@s: pointer
  *@accept: pointer 2
  *Return: unsigned int
  */
unsigned int _strspn(char *s, char *accept)
{
	int k, h, w;

	k = 0;
	w = 0;

	while (s[k] != '\0')
	{
		h = 0;
		while (accept[h] != '\0')
		{
			if (s[k] == accept[h])
			{
				w++;
				break;
			}
			h++;
		}
		if (accept[h] == '\0')
			break;
		k++;
	}
	return (w);
}
