#include "main.h"


/**
*_strchr - prints the first occurence of a char onwards
*@s: the string
*@c: the char
*Return: s (the rest of the string after c
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)

			return (s + 1);
		s++;
	}
	return (s + 1);
}
