#include "main.h"
#include <errno.h>

#define BUFFERSIZE 1024

void close_sourcefd(int sourcefd);
/**
*main - entry point
*copies contents from one to another
*@argc: number of command lined arguments
*@argv: array containing the arguments
*Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
int sourcefd, destfd;
ssize_t bytesread, byteswritten;
char buffer[BUFFERSIZE];/*char *source = argv[1], *dest = argv[2];*/
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
	sourcefd = open(argv[1], O_RDONLY);
	if (sourcefd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read form file %s\n", argv[1]);
		exit(98);
	}
	destfd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (destfd == -1)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
		close(sourcefd);
		exit(99);
	}
	while ((bytesread = read(sourcefd, buffer, BUFFERSIZE)) > 0)
	{
		byteswritten = write(destfd, buffer, bytesread);
		if (byteswritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(sourcefd);
			close(destfd);
			exit(99);
		}
	}
	if (bytesread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(sourcefd);
		close(destfd);
		exit(98);
	}
	if (close(sourcefd) == -1)
		close_sourcefd(sourcefd);
return (0);
}

/**
*close_sourcefd - Closes source file and exits at status 100
*@sourcefd: file descriptor for file to be closed
*Return: 100
*/
void close_sourcefd(int sourcefd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sourcefd);
exit(100);
}
