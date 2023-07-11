#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*alloc_grid - return a pointer to a 2d int array
*@width: first dimension of the array
*@height: second dimension of the array
*Return: NULL on failure or if width or height are 0
*/

int **alloc_grid(int width, int height)
{
int **array2d;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

array2d = (int **)malloc(height * sizeof(int *));

if (array2d == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
array2d[i] = malloc(width * sizeof(int));
if (array2d[i] == NULL)
{
for (j = 0; j < i; j++)
free(array2d[j]);
free(array2d);
return (NULL);
}
}
return (array2d);
}
