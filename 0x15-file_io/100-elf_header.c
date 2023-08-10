#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define DEFAULT_PAD 35
#define FILE_ST 50
void padding(int pad);
/**
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}

/**
* _entry_point - address of the start of a prog in a file
* @arr: arr containg file bytes content
*/
void _entry_point(char *arr)
{
	int add, add2;

	printf("Entry point address:");
	padding(_strlen("Entry point address:"));
	if ((int) arr[4] == 1)
	{
		add = ((int)arr[24]) | ((int)arr[25]) | ((int) arr[26]) | ((int) arr[27]);
		dprintf(STDOUT_FILENO, "0x%x", add);
	}
	else if ((int)arr[4] == 2)
	{
		add = (int) arr[24] | (int) arr[25] | (int) arr[26] | (int) arr[27];
		add2 = (int) arr[28] | (int) arr[29] | (int) arr[30] | (int) arr[31];
		printf("0x%x", (add | add2));
	}
	printf("\n");
}
/**
* type_ - identify the type of elf file
* @arg: int identifier
*/
void type_(int arg)
{
	printf("Type:");
	padding(_strlen("Type:"));

	switch (arg)
	{
		case 0:
			printf("NONE (Unknown)");
			break;
		case 1:
			printf("REL (Relocatable file)");
			break;
		case 2:
			printf("EXEC (Executable file)");
			break;
		case 3:
			printf("DYN (Shared object)");
			break;
		case 4:
			printf("CORE (Core file)");
			break;
		case 65279:
		case 65024:
			printf("LOOS (Reserved)");
			break;
		case 65280:
		case 65535:
			printf("LOPROC (Reserved)");
			break;
	}
	printf("\n");
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
		printf("elf_read:Erro not an elf file\n");
		exit(98);
	}
	printf("Magic:   ");
	while (i < 16)
	{
		printf("%02x ", *elf_header);
		i++;
		elf_header++;
	}
	printf("\n");
}
/**
* padding - add space to format output
* @pad: _strlen of already occupied space
*/
void padding(int pad)
{
	int i = DEFAULT_PAD - pad;

	while (i > 0)
	{
		printf(" ");
		i--;
	}
}
/**
* print_class - identify class of elf file
* @n: interger arguemnt ---class identifier byte
*/
void print_class(int n)
{
	printf("Class:");
	padding(_strlen("Class:"));
	if (n == 1)
		printf("ELF32");
	else if (n == 2)
		printf("ELF64");
	else
		printf("ELFNONE");
	printf("\n");
}
/**
* print_data - print data representation in memenory
* @p: content of data representation byte
*/
void print_data(int p)
{
	printf("Data:");
	padding(_strlen("Data:"));
	if (p == 1)
		printf("2's complement, little endian");
	else if (p == 2)
		printf("2's complement, little endian");
	else
		printf("ELFDATANONE");
	printf("\n");
}
/**
* _version - version of application binary interface
* @m: int value of byte containing bit representation mask
*/
void _version(int m)
{
	printf("ABI Version:");
	padding(_strlen("ABI Version:"));
	printf("%d\n", m);
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
			printf("UNIX - System V");
			break;
		case 1:
			printf("UNIX - HP_UX");
			break;
		case 2:
			printf("UNIX - NetBSD");
			break;
		case 3:
			printf("UNIX - Linux");
			break;
		case 4:
			printf("UNIX - GNU Hurd");
			break;
		case 5:
			printf("UNIX - Solaris");
			break;
		case 6:
			printf("UNIX - AIX");
			break;
		case 7:
			printf("UNIX - IRIX");
			break;
		case 8:
			printf("UNIX - FreeBSD");
			break;

	}
	printf("\n");
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
			printf("UNIX - Tru64");
			break;
		case 10:
			printf("UNIX - Novell Modesto");
			break;
		case 11:
			printf("UNIX - IRIX");
			break;
		case 12:
			printf("UNIX - OpenBSD");
			break;
		case 13:
			printf("UNIX - OpenVMS");
			break;
		case 14:
			printf("UNIX - NonStop Kernel");
			break;
		case 15:
			printf("UNIX - AROS");
			break;
		case 16:
			printf("UNIX - FenixOS");
			break;
		case 17:
			printf("UNIX - Nuxi CloudABI");
			break;
		case 18:
			printf("UNIX - Stratus Technologies OpenVOS");
			break;
		default:
			printf("<unknown: %d>", os2);
			break;
	}
	printf("\n");
}
/**
* _version_elf - executable file version
* @elfv: int -rep vercion of exec file
*/
void _version_elf(int elfv)
{
	printf("Version:");
	padding(_strlen("Version:"));
	if (elfv == 0)
		printf("%d (invalid)\n", elfv);
	else
		printf("%d (current)\n", elfv);
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
		printf("elf_header elf_filename\n");
		exit(98);
	}
	fd = open(arglist[1], O_RDONLY);
	if (fd == -1)
	{
		printf("ERRO: USAGE VALID FILE \n");
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
	printf("OS/ABI:");
	padding(_strlen("OS/ABI:"));
	os_ab = (int) buffer[7];
	if (os_ab < 9)
		_os_abi(os_ab);
	else
		_os2_abi(os_ab);
	_version(buffer[8]);
	type_((int)buffer[16] | (int)buffer[17]);
	_entry_point(buffer);
	free(buffer);
	return (0);
}
