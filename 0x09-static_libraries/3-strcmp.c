#include "main.h"

/**
  *_strcmp - starting point
  *@s1: first operand
  *@s2: second operand
  *Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int t = 0;
	int v;

	while (s1[t] == s2[t] && s1[t] != '\0')
	{
		t++;
	}
	v = s1[t] - s2[t];
	return (v);
}
