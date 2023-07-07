#include "main.h"

/**
  *_memcpy - starting point
  *@dest: pointer
  *@src: pointer
  *@n: unsigned integer
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
