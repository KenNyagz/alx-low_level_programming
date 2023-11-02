#include "main.h"

/**
  *_strcpy - starting point
  *@dest: first operand
  *@src: second operand
  *Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0; r <= _strlen(src); r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
