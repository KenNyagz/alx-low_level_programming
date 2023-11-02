#include "main.h"

/**
  *_strncat - starting point
  *@dest: first operand
  *@src: second operand
  *@n: determines no of elements
  *Return: char
  */
char *_strncat(char *dest, char *src, int n)
{
	int y = 0;
	int z;

	while (dest[y] != '\0')
	{
		y++;
	}
	for (z = 0; (z < n && src[z] != '\0'); z++, y++)
	{
		dest[y] = src[z];
	}
	dest[y] = '\0';
	return (dest);
}
