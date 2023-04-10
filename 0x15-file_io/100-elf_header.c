#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

void get_magic(ElfW(Ehdr) hdr);
void get_class(ElfW(Ehdr) hdr);
void get_data(ElfW(Ehdr) hdr);
void get_version(ElfW(Ehdr) hdr);
void get_os(ElfW(Ehdr) hdr);
void get_abi(ElfW(Ehdr) hdr);
void get_type(ElfW(Ehdr) hdr);
void get_entry(ElfW(Ehdr) hdr);
unsigned long int reverse_bit32(unsigned long int x);
unsigned long int reverse_bit64(unsigned long int x);


int main(int argc, char *argv[])
{
	ElfW(Ehdr) header;
	int o, r, c;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	o = open(argv[1], O_RDONLY);
	r = read(o, &header, sizeof(header));
	if (o == -1 || r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read %s\n", argv[1]);
		exit(98);
	}
	printf("ELF Header:\n");
	get_magic(header);
	get_class(header);
	get_data(header);
	get_version(header);
	get_os(header);
	get_abi(header);
	get_type(header);
	get_entry(header);
	c = close(o);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(98);
	}
	return (0);
}

void get_magic(ElfW(Ehdr) hdr)
{
	char hex[2] = {0}, c;
	unsigned int i = 0, num;

	printf("  Magic:   ");
	while (i < 16)
	{
		num = hdr.e_ident[i];
		sprintf(hex, "%x", num);
		if (!hex[1])
		{
			c = hex[0];
			hex[0] = '0';
			hex[1] = c;
		}
		printf("%s", hex);
		if (i < 15)
			printf(" ");
		i++;
	}
	printf("\n");
}
void get_class(ElfW(Ehdr) hdr)
{
	printf("  Class:\t\t\t     ");
	switch (hdr.e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASSNONE:
			printf("None\n");
			break;
		default:
			printf("<unknown %x>\n", hdr.e_ident[EI_CLASS]);
			break;
	}

}
void get_data(ElfW(Ehdr) hdr)
{
	printf("  Data:\t\t\t\t     ");
	switch (hdr.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown %x>\n", hdr.e_ident[EI_CLASS]);
			break;

	}
}
void get_version(ElfW(Ehdr) hdr)
{
	printf("  Version:\t\t\t     ");
	switch (hdr.e_version)
	{
		case EV_NONE:
			printf("None\n");
			break;
		case EV_CURRENT:
			printf("%x (current)\n", hdr.e_version);
			break;
		default:
			printf("<unknown %x>\n", hdr.e_version);
			break;
	}
}
void get_os(ElfW(Ehdr) hdr)
{
	printf("  OS/ABI:\t\t\t     ");
	switch (hdr.e_ident[EI_OSABI])
	{
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
		case ELFOSABI_SOLARIS:
			printf("UNIX - Sun Solaris\n");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - IBM AIX\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - SGI Irix\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - Compaq TRU64 UNIX\n");
			break;
		case ELFOSABI_MODESTO:
			printf("UNIX - Novell Modesto\n");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("UNIX - ARM EABI\n");
			break;
		case ELFOSABI_ARM:
			printf("UNIX - ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("UNIX - Standalone (embedded)\n");
			break;
		default:
			printf("<unknown %x>\n", hdr.e_ident[EI_OSABI]);
			break;
	}

}
void get_abi(ElfW(Ehdr) hdr)
{
	printf("  ABI Version:\t\t\t     ");
	printf("%x\n", hdr.e_ident[EI_ABIVERSION]);
}
void get_type(ElfW(Ehdr) hdr)
{
	printf("  Type:\t\t\t\t     ");
	switch (hdr.e_type)
	{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x", hdr.e_type);
			break;
	}
}
void get_entry(ElfW(Ehdr) hdr)
{
	unsigned long int num = hdr.e_entry;

	printf("  Entry point address:\t\t     ");
	if (hdr.e_ident[EI_DATA] == ELFDATA2MSB)
	{
		num = ((num << 8) & 0xFF00FF00) | ((num >> 8) & 0xFF00FF);
		num = (num << 16) | (num >> 16);
	}

	if (hdr.e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)num);

	else
		printf("%#lx\n", num);
}
