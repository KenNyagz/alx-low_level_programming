#include "main.h"
#include "_putchar.c"

/**
*_strchr - prints the first occurence of a char onwards
*@s: the string
*@c: the char
*Return: s (the rest of the string after c
*/

char *_strchr(char *s, char c)
{
while (*s != c)
s++;
if (*s == c)
{
_putchar(*s);
s++;
}
return (s);

}
