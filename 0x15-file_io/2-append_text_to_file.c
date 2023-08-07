#include "main.h"

/**
*append_text_to_file - function that apppends text at the end of a file
*@filename: name of file
*@text_content: text to be appended to file(Null terminated string)
*Return: 1 on success, -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
ssize_t byteswritten;
size_t text_length = strlen(text_content);
int fd;

if (filename == NULL || text_content == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
if (fd == -1)
{
close(fd);
return (-1);
}

byteswritten = write(fd, text_content, text_length);
close(fd);

if (byteswritten != (ssize_t)text_length)
return (-1);

return (1);
}
