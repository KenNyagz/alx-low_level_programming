#include "main.h"
#include <elf.h>

void print_error(const char *);
void print_elf_header_info(Elf64_Ehdr *header);
void read_elf_header(const char *filename);

/**
*main - checks and prints elf header of a file
*@argc: argument count
*@argv: arguments strings
*Return: 0 ,success
*/

int main(int argc, char *argv[])
{
if (argc != 2)
	print_error("Usage: elf_header elf_filename");

read_elf_header(argv[1]);

return (0);
}

/**
*print_error - prints error message
*@message: str to be printed
*Return: void
*/
void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);
}

/**
*print_elf_header_info - prints elf header file info
*@header: the elf header
*Return: void
*/
void print_elf_header_info(Elf64_Ehdr *header)
{
int i;
printf("Magic: ");
	for (i = 0; i < 16; i++)
		printf("%02x ", header->e_ident[i]);

	printf("\n");
	printf("Class:                         %d\n", header->e_ident[EI_CLASS]);
	printf("Data:                          %d\n", header->e_ident[EI_DATA]);
	printf("Version:                       %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                        %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version:                   %d\n", header->e_ident[EI_ABIVERSION]);
		printf("Type:                         %d\n", header->e_type);
	printf("Entry point address:          %lx\n", (unsigned long)header->e_entry);
}

/**
*read_elf_header - read files elf header
*@filename: file
*Return: void
*/
void read_elf_header(const char *filename)
{
Elf64_Ehdr header;
int fd = open(filename, O_RDONLY);
	if (fd == -1)
		print_error("Failed to open file");

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		close(fd);
		print_error("Failed to read ELF header");
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		close(fd);
		print_error("Not an ELF file");
	}

print_elf_header_info(&header);
close(fd);
}
