#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DEFAULT_PAD 35
#define FILE_ST 50
void padding(int pad);
/**
* _entry_point - address of the start of a prog in a file
* @arr: arr containg file bytes content
*/
void _entry_point(char *arr)
{
	int add, add2;

	dprintf(STDOUT_FILENO, "Entry point address:");
	padding(strlen("Entry point address:"));
	if ((int) arr[4] == 1)
	{
		add = ((int)arr[24]) | ((int)arr[25]) | ((int) arr[26]) | ((int) arr[27]);
		dprintf(STDOUT_FILENO, "0x%x", add);
	}
	else if ((int)arr[4] == 2)
	{
		add = (int) arr[24] | (int) arr[25] | (int) arr[26] | (int) arr[27];
		add2 = (int) arr[28] | (int) arr[29] | (int) arr[30] | (int) arr[31];
		dprintf(STDOUT_FILENO, "0x%x", (add | add2));
	}
	dprintf(STDOUT_FILENO, "\n");
}
/**
* type_ - identify the type of elf file
* @arg: int identifier
*/
void type_(int arg)
{
	dprintf(STDOUT_FILENO, "Type:");
	padding(strlen("Type:"));

	switch (arg)
	{
		case 0:
			dprintf(STDOUT_FILENO, "NONE (Unknown)");
			break;
		case 1:
			dprintf(STDOUT_FILENO, "REL (Relocatable file)");
			break;
		case 2:
			dprintf(STDOUT_FILENO, "EXEC (Executable file)");
			break;
		case 3:
			dprintf(STDOUT_FILENO, "DYN (Shared object)");
			break;
		case 4:
			dprintf(STDOUT_FILENO, "CORE (Core file)");
			break;
		case 65279:
		case 65024:
			dprintf(STDOUT_FILENO, "LOOS (Reserved)");
			break;
		case 65280:
		case 65535:
			dprintf(STDOUT_FILENO, "LOPROC (Reserved)");
			break;
	}
	dprintf(STDOUT_FILENO, "\n");
}
/**
* read_head- head of elf file
* @elf_header: char ptr to elf file
*/
void read_head(char *elf_header)
{
	int i = 0;
	int flag = 0;

	if ((int) elf_header[0] != 127)
		flag = 1;
	if ((int) elf_header[1] != 69)
		flag = 1;
	if ((int) elf_header[2] != 76)
		flag = 1;
	if ((int) elf_header[3] != 70)
		flag = 1;
	if (flag == 1)
	{
		dprintf(STDERR_FILENO, "elf_read:Erro nota an elf file\n");
		exit(98);
	}
	dprintf(STDOUT_FILENO, "Magic:   ");
	while (i < 16)
	{
		dprintf(STDOUT_FILENO, "%02x ", *elf_header);
		i++;
		elf_header++;
	}
	dprintf(STDOUT_FILENO, "\n");
}
/**
* padding - add space to format output
* @pad: strlen of already occupied space
*/
void padding(int pad)
{
	int i = DEFAULT_PAD - pad;

	while (i > 0)
	{
		dprintf(STDOUT_FILENO, " ");
		i--;
	}
}
/**
* print_class - identify class of elf file
* @n: interger arguemnt ---class identifier byte
*/
void print_class(int n)
{
	dprintf(STDOUT_FILENO, "Class:");
	padding(strlen("Class:"));
	if (n == 1)
		dprintf(STDOUT_FILENO, "ELF32");
	else if (n == 2)
		dprintf(STDOUT_FILENO, "ELF64");
	else
		dprintf(STDOUT_FILENO, "ELFNONE");
	dprintf(STDOUT_FILENO, "\n");
}
/**
* print_data - print data representation in memenory
* @p: content of data representation byte
*/
void print_data(int p)
{
	dprintf(STDOUT_FILENO, "Data:");
	padding(strlen("Data:"));
	if (p == 1)
		dprintf(STDOUT_FILENO, "2's complement, little endian");
	else if (p == 2)
		dprintf(STDOUT_FILENO, "2's complement, little endian");
	else
		dprintf(STDOUT_FILENO, "ELFDATANONE");
	dprintf(STDOUT_FILENO, "\n");
}
/**
* _version - version of application binary interface
* @m: int value of byte containing bit representation mask
*/
void _version(int m)
{
	dprintf(STDOUT_FILENO, "ABI Version:");
	padding(strlen("ABI Version:"));
	dprintf(STDOUT_FILENO, "%d\n", m);
}
/**
* _os_abi - operationg system application binary interface
* @os: int representation byte
*/
void _os_abi(int os)
{
	switch (os)
	{
		case 0:
			dprintf(STDOUT_FILENO, "UNIX - System V");
			break;
		case 1:
			dprintf(STDOUT_FILENO, "UNIX - HP_UX");
			break;
		case 2:
			dprintf(STDOUT_FILENO, "UNIX - NetBSD");
			break;
		case 3:
			dprintf(STDOUT_FILENO, "UNIX - Linux");
			break;
		case 4:
			dprintf(STDOUT_FILENO, "UNIX - GNU Hurd");
			break;
		case 5:
			dprintf(STDOUT_FILENO, "UNIX - Solaris");
			break;
		case 6:
			dprintf(STDOUT_FILENO, "UNIX - AIX");
			break;
		case 7:
			dprintf(STDOUT_FILENO, "UNIX - IRIX");
			break;
		case 8:
			dprintf(STDOUT_FILENO, "UNIX - FreeBSD");
			break;

	}
	dprintf(STDOUT_FILENO, "\n");
}
/**
* _os2_abi - identifies machine to which elf is compiled to run on
* @os2: int rep of bit rep for machine_specific
*/
void _os2_abi(int os2)
{
	switch (os2)
	{
		case 9:
			dprintf(STDOUT_FILENO, "UNIX - Tru64");
			break;
		case 10:
			dprintf(STDOUT_FILENO, "UNIX - Novell Modesto");
			break;
		case 11:
			dprintf(STDOUT_FILENO, "UNIX - IRIX");
			break;
		case 12:
			dprintf(STDOUT_FILENO, "UNIX - OpenBSD");
			break;
		case 13:
			dprintf(STDOUT_FILENO, "UNIX - OpenVMS");
			break;
		case 14:
			dprintf(STDOUT_FILENO, "UNIX - NonStop Kernel");
			break;
		case 15:
			dprintf(STDOUT_FILENO, "UNIX - AROS");
			break;
		case 16:
			dprintf(STDOUT_FILENO, "UNIX - FenixOS");
			break;
		case 17:
			dprintf(STDOUT_FILENO, "UNIX - Nuxi CloudABI");
			break;
		case 18:
			dprintf(STDOUT_FILENO, "UNIX - Stratus Technologies OpenVOS");
			break;
		default:
			dprintf(STDOUT_FILENO, "<unknown: %d>", os2);
			break;
	}
	dprintf(STDOUT_FILENO, "\n");
}
/**
* _version_elf - executable file version
* @elfv: int -rep vercion of exec file
*/
void _version_elf(int elfv)
{
	dprintf(STDOUT_FILENO, "Version:");
	padding(strlen("Version:"));
	if (elfv == 0)
		dprintf(STDOUT_FILENO, "%d (invalid)\n", elfv);
	else
		dprintf(STDOUT_FILENO, "%d (current)\n", elfv);
}
/**
* main - entry
* @args: no of ars
* @arglist: list of arguements
* Return: --0-sucess--
*/
int main(int args, char **arglist)
{
	char *buffer;
	int fd;
	int f_d;
	int os_ab;

	if (args < 2)
	{
		dprintf(STDERR_FILENO, "elf_header elf_filename\n");
		exit(98);
	}
	fd = open(arglist[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "ERRO: USAGE VALID FILE \n");
		exit(98);
	}
	buffer = malloc(FILE_ST);
	if (buffer == NULL)
		exit(98);
	f_d = read(fd, buffer, 35);
	if (f_d == -1)
		exit(98);
	read_head(buffer);
	print_class(buffer[4]);
	print_data(buffer[5]);
	_version_elf((int)buffer[6]);
	dprintf(STDOUT_FILENO, "OS/ABI:");
	padding(strlen("OS/ABI:"));
	os_ab = (int) buffer[7];
	if (os_ab < 9)
		_os_abi(os_ab);
	else
		_os2_abi(os_ab);
	_version(buffer[8]);
	type_((int)buffer[16] | (int)buffer[17]);
	_entry_point(buffer);
	return (0);
}
