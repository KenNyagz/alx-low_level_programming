#include "main.h"

/**
  *_strstr - starting point
  *@haystack: pointer
  *@needle: pointer
  *Return: char
  */
char *_strstr(char *haystack, char *needle)
{
	int q;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		q = 0;
		if (haystack[q] == needle[q])
		{
			do {
				if (needle[q + 1] == '\0')
				{
					return (haystack);
				}
				q++;
			} while (haystack[q] == needle[q]);

		}
		haystack++;
	}
	return ('\0');
}

