#include "main.h"

/**
  *_strchr - starting point
  *@s: pointer
  *@c: char
  *Return: pointer or NULLL
  */
char *_strchr(char *s, char c)
{
	int z = 0;

	for (; s[z] >= '\0'; z++)
	{
		if (s[z] == c)
		{
			return (&s[z]);
		}
	}
	return ('\0');
}
