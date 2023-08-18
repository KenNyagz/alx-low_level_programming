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
/*char *source = argv[1], *dest = argv[2];*/

if (argc != 3)
{
dprintf(STDERR_FILENO,"Usage: %s file_from file_to\n", argv[0]);
}

sourcefd = open(argv[1], O_RDONLY);
if(sourcefd == -1)
{
dprintf(STDERR_FILENO,"Error: Can't read form file %s\n", argv[1]);
exit(98);
}

destfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (destfd == -1)
{
close(sourcefd);
dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
exit(99);
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
