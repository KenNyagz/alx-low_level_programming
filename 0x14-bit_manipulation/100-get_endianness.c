#include "main.h"

/**
*get_endianness - gets the type of endianness of a system
*Return: 1 if little endian or 0 if big endian
*/

int get_endianness(void)
{
unsigned int u = 1;
char *c = (char *)&u;

return (*c);
}
