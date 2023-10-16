#include "main.h"

/**
  *_strcat - starting point
  *@dest: first operand
  *@src: second operand
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
