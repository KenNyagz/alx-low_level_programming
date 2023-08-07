#include "main.h"
#include <errno.h>

#define BUFFERSIZE 1024
void handleError(int exitcode, const char *errormessage);

/**
*main - entry point
*copies contents from one to another
*@argc: number of command lined arguments
*@argv: array containing the arguments
*/


int main (int argc, char *argv[])
{
int sourcefd, destfd;
ssize_t bytesread, byteswritten;
char buffer[BUFFERSIZE];
char *source = argv[1], *dest = argv[2];

if (argc != 3)
{
handleError(97,"Usage: cp file_from file_to");
}

sourcefd = open(source, O_RDONLY);
if(sourcefd == -1)
handleError(98, strerror(errno));

destfd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (destfd == -1)
{
close(sourcefd);
handleError(99, strerror(errno));
}

while ((bytesread = read(sourcefd, buffer, BUFFERSIZE)) > 0)
{
byteswritten = write(destfd, buffer, bytesread);
if (byteswritten == -1)
{
close(sourcefd);
close(destfd);
handleError(99, strerror(errno));
}
}
if (bytesread == -1)
{
close(sourcefd);
close(destfd);
handleError(98, strerror(errno));
}

if (close(sourcefd) == -1)
handleError(100, strerror(errno));

return (0);
}

void handleError(int exitcode, const char *errormessage)
{
dprintf(2, "Error: %s\n", errormessage);
exit(exitcode);
}
