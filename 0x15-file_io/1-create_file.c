#include "main.h"

/**
*create_file - fucntion that creates a file
*@filename: name of file to create
*@text_content: NULL terminated string to be inside file
*Return: 1 on success, -1 otherwise
*/

int create_file(const char *filename, char *text_content)
{
int fd;
size_t text_length;
ssize_t byteswritten;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
text_length = 0;
while (text_content[text_length] != '\0')
text_length++;

byteswritten = write(fd, text_content, text_length);
close(fd);

/*if (byteswritten != (ssize_t)text_length)
return (-1);*/

if (byteswritten == -1)
{
close(fd);
return (-1);
}
}
else
close(fd);

return (1);
}
