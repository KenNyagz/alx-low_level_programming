#include "main.h"

/**
*  _memset - fills memory with a constant byte
*@s: the memroy block(of chars
*@b: the char byte being filled constantly
*@n: number of bytes being filled
*Return: char *s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;

return (s);
}
