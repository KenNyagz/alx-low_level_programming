#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*_strdup - returns a pointer to a newly allocated space in memory
*which is a duplicate of str
*@str: the string to be duplicated
*Return: NULL if str = NULL,pointer to str duplicte
*/

char *_strdup(char *str)
{
char *p;

if (str == NULL)
return (NULL);

p = malloc((strlen(str) + 1) * sizeof(char));
if (p == NULL)
return (NULL);

strcpy(p, str);
return (p);
}
