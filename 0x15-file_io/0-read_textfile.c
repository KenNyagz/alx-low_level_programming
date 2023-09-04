#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output
*@filename: name of the file
*@letters: number of letters it shoul read and print
*Return: Number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, byteswritten;
char *buffer;
FILE *fp;

if (filename == NULL)
return (0);

fp = fopen(filename, "r");
if (fp == NULL)
return (0);

buffer = malloc(letters + 1);
if (buffer == NULL)
{
fclose(fp);
return (0);
}

fd = fread(buffer, sizeof(char), letters, fp);
fclose(fp);

if (fd <= 0)
{
free(buffer);
return (0);
}

buffer[fd] = '\0';
byteswritten = write(STDOUT_FILENO, buffer, fd);
free(buffer);

if (byteswritten != fd)
return (0);

return (fd);
}
