#include "main.h"

/**
  *_strncpy - starting point
  *@dest: first operand
  *@src: second operand
  *@n: determines no of elements
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	for (; e < n; e++)
	{
		dest[e] = '\0';
	}
	return (dest);
}
