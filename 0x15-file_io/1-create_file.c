#include "main.h"

/**
*create_file - fucntion that creates a file
*@filename: name of file to create
*@text_content: NULL terminated string to be inside file
*Return: 1 on success, -1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
FILE *file;

if (filename == NULL)
return (-1);

file = fopen(filename, "w");

if (file == NULL)
return (-1);

if (text_content != NULL)
fprintf(file, "%s", text_content);

return (1);
}
