#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_elf_info(Elf64_Ehdr *header) {
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++) 
{
printf("%02x ", header->e_ident[i]);
}
printf("\n");
printf("  Class:                             ");
switch (header->e_ident[EI_CLASS]) {
case ELFCLASS32:
printf("ELF32\n");
break;
case ELFCLASS64:
printf("ELF64\n");
break;
default:
printf("Invalid\n");
break;
}
printf("  Data:                              ");
switch (header->e_ident[EI_DATA]) {
case ELFDATA2LSB:
printf("2's complement, little endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("Invalid\n");
break;
}
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);

printf("  OS/ABI:                            ");
switch (header->e_ident[EI_OSABI]) {
case ELFOSABI_SYSV:
printf("UNIX - System V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
default:
printf("Unknown\n");
break;
}

printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);

printf("  Type:                              ");
switch (header->e_type) {
case ET_NONE:
printf("NONE (Unknown)\n");
break;
case ET_REL:
printf("REL (Relocatable file)\n");
break;
case ET_EXEC:
printf("EXEC (Executable file)\n");
break;
case ET_DYN:
printf("DYN (Shared object file)\n");
break;
case ET_CORE:
printf("CORE (Core file)\n");
break;
default:
printf("Unknown\n");
break;
}

printf("  Entry point address:               0x%llx\n", (unsigned long long)header->e_entry);
}

int main(int argc, char *argv[]) {
if (argc != 2) {
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}

const char *filename = argv[1];
int fd = open(filename, O_RDONLY);
if (fd == -1) {
fprintf(stderr, "Error: Cannot open file '%s'\n", filename);
exit(98);
}

Elf64_Ehdr elf_header;
ssize_t bytes_read = read(fd, &elf_header, sizeof(elf_header));
if (bytes_read != sizeof(elf_header) || elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
elf_header.e_ident[EI_MAG3] != ELFMAG3) {
fprintf(stderr, "Error: Not an ELF file: '%s'\n", filename);
close(fd);
exit(98);
}
printf("ELF Header:\n");
print_elf_info(&elf_header);
close(fd);
return 0;
}
