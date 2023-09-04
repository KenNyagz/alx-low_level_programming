#include "main.h"
#include <errno.h>

#define BUFFERSIZE 1024

void close_sourcefd(int sourcefd, int destfd);
/**
*main - entry point
*copies contents from one to another
*@argc: number of command lined arguments
*@argv: array containing the arguments
*Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
ssize_t bytesread, byteswritten, sourcefd, destfd;
char buffer[BUFFERSIZE], *source = argv[1], *dest = argv[2];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	sourcefd = open(source, O_RDONLY);
	if (sourcefd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", source);
		exit(98);
	}
	destfd = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destfd == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", dest);
		close(sourcefd);
		exit(99);
	}
	while ((bytesread = read(sourcefd, buffer, BUFFERSIZE)) > 0)
	{
		byteswritten = write(destfd, buffer, bytesread);
		if (byteswritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			close(sourcefd);
			close(destfd);
			exit(99);
		}
	}
	if (bytesread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		close(sourcefd);
		close(destfd);
		exit(98);
	}
	if (close(sourcefd) == -1 || close(destfd) == -1)
		close_sourcefd(sourcefd, destfd);
return (0);
}

/**
*close_sourcefd - Closes source file and exits at status 100
*@sourcefd: file descriptor for file to be closed
*Return: 100
*/
void close_sourcefd(int sourcefd, int destfd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
(sourcefd == -1) ? destfd : sourcefd);
exit(100);
}
