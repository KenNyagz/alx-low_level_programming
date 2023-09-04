#include "main.h"

/**
*append_text_to_file - function that apppends text at the end of a file
*@filename: name of file
*@text_content: text to be appended to file(Null terminated string)
*Return: 1 on success, -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
/*
*ssize_t byteswritten;
*size_t text_length = strlen(text_content);
*int fd;
*/
int success;
FILE *file;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

/*fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);*/
file = fopen(filename, "a");
if (file == NULL)
{
return (-1);
}
success = fputs(text_content, file);
/*
*byteswritten = write(fd, text_content, text_length);
*close(fd);
*
*if (byteswritten < (ssize_t)text_length)
*return (-1);
*/
fclose(file);
/*return (1);*/
return ((success == EOF) ? -1 : 1);
}
