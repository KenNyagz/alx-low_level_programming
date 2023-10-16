#include "main.h"

/**
  *_strlen - starting point
  *@s: pointer
  *Return: length of the string
  */

int _strlen(char *s)
{
	int b;

	for (b = 0; s[b] != '\0'; b++)
	{}
	return (b);
}
