#include <string.h>
#include "main.h"
#define PAD 35
/**
* _print_other - print type and entry point addrss
* @buf: buffer to first 32 bytes of the file
*/
void _print_other(char *buf)
{
	int start_address = 0, i;
	int n = (int) buf[15] | (int) buf[16];

	dprintf(STDOUT_FILENO, "  Type:");
	padding("Type:");

	if (n == 0)
		dprintf(STDOUT_FILENO, "NONE (Unknown)\n");
	else if (n == 1)
		dprintf(STDOUT_FILENO, "REL (Relocatable file)\n");
	else if (n == 2)
		dprintf(STDOUT_FILENO, "EXEC (Executable file)\n");
	else if (n == 3)
		dprintf(STDOUT_FILENO, "DYN (Shared object)\n");
	else if (n == 4)
		dprintf(STDOUT_FILENO, "CORE (Core file)\n");

	dprintf(STDOUT_FILENO, "  Entry point address:");
	padding("Entry point address:");
	if ((int)buf[4] == 1)
		start_address = (int)buf[23] | (int)buf[24] | (int)buf[26] | (int)buf[27];
	else if ((int)buf[4] == 2)
	{
		i = 23;
		{
			while (i <= 30)
			{
				start_address = start_address | (int)buf[i];
				i++;
			}
		}
	}
	dprintf(STDOUT_FILENO, "0x%x\n", start_address);
}
/**
* print_os_abi - prints operating system abi
* @n: os abi identifier
* @os: name of the os
*/
void print_os_abi(int n, char *os)
{
	dprintf(STDOUT_FILENO, "  OS/ABI:");
	padding("OS/ABI:");
	if (os == NULL)
		dprintf(STDOUT_FILENO, "<unknown: %d>\n", n);
	else
		dprintf(STDOUT_FILENO, "%s\n", os);
}
/**
* os_abi1 - search and find os abi
* @n: os abi identifier
*/
void os_abi1(int n)
{
	char *os;

	switch (n)
	{
		case 0:
			os = "UNIX - System V";
			break;
		case 1:
			os = "UNIX - HP-UX";
			break;
		case 2:
			os = "UNIX - NetBSD";
			break;
		case 3:
			os = "UNIX - Linux";
			break;
		case 4:
			os = "UNIX - GNU Hurd";
			break;
		case 6:
			os = "UNIX - Solaris";
			break;
		case 7:
			os = "UNIX - AIX";
			break;
		case 8:
			os = "UNIX - IRIX";
			break;
		case 9:
			os = "UNIX - FreeBSD";
			break;
		default:
			os = NULL;
			break;
	}
	print_os_abi(n, os);
}
/**
* os_abi2 - operating sytem abi search two
* @n: os abi identifier
*/
void os_abi2(int n)
{
	char *os;

	switch (n)
	{
		case 10:
			os = "UNIX - True64";
			break;
		case 11:
			os = "UNIX - Novell Modesto ";
			break;
		case 12:
			os = "UNIX - OpenBSD";
			break;
		case 13:
			os = "UNIX - OpenVMS";
			break;
		case 14:
			os = "UNIX - NonStop Kernel";
			break;
		case 15:
			os = "UNIX - AROS";
			break;
		case 16:
			os = "UNIX - FenixOS ";
			break;
		case 17:
			os = "UNIX - Nuxi CloudABI";
			break;
		case 18:
			os = "UNIX - Stratus Technologies OpenVOS";
			break;
		default:
			os = NULL;
			break;
	}
	print_os_abi(n, os);
}
/**
* padding - structure the display
* @string: string string already writem to stdout
*/
void padding(char *string)
{
	int pad = PAD - strlen(string);

	while (pad != 0)
	{
		dprintf(STDOUT_FILENO, " ");
		pad--;
	}
}
/**
* _os_abi - choose n direction
* @n: - os abi identifier
*/
void _os_abi(int n)
{
	if (n <= 9)
		os_abi1(n);
	else
		os_abi2(n);
}
/**
* print_elf_info - print executable file info
* @buffer: pointer to buffer containing first 32 bits of the file
*/
void print_elf_info(char *buffer)
{
	int i = 0;

	dprintf(STDOUT_FILENO, "ELF Header:\n");
	dprintf(STDOUT_FILENO, "  Magic:   ");
	while (i < 16)
	{
		dprintf(STDOUT_FILENO, "%02x", (int)buffer[i]);
		if (i != 15)
			dprintf(STDOUT_FILENO, " ");
		i++;
	}
	dprintf(STDOUT_FILENO, "\n");
	dprintf(STDOUT_FILENO, "  class:");
	padding("class:");
	if (buffer[4] == 2)
		dprintf(STDOUT_FILENO, "ELF64");
	else if (buffer[4] == 1)
		dprintf(STDOUT_FILENO, "ELF32");
	dprintf(STDOUT_FILENO, "\n");
	dprintf(STDOUT_FILENO, "  Data:");
	padding("Data:");
	if (buffer[5] == 1)
		dprintf(STDOUT_FILENO, "2's complement, little endian");
	else if (buffer[5] == 2)
		dprintf(STDOUT_FILENO, "2's complement, big endian");
	else
		dprintf(STDOUT_FILENO, "unknown");
	dprintf(STDOUT_FILENO, "\n");
	dprintf(STDOUT_FILENO, "  Version:");
	padding("Version:");
	if (buffer[6] == 1)
		dprintf(STDOUT_FILENO, "1 (current)");
	dprintf(STDOUT_FILENO, "\n");
	_os_abi((int)buffer[7]);
	dprintf(STDOUT_FILENO, "  ABI Version:");
	padding("ABI Version:");
	dprintf(STDOUT_FILENO, "%d\n", (int) buffer[8]);
	_print_other(buffer);
}
/**
* main -readelf-program
* @arg: number of arguements
* @list: arguement list
* Return: exit status'es'
*/
int main(int arg, char **list)
{
	int i, fd, fd2, arr[4];
	char *buf;

	arr[0] = 127;
	arr[1] = 69;
	arr[2] = 76;
	arr[3] = 70;
	if (arg != 2)
	{
		dprintf(STDERR_FILENO, "elf_header elf_filename\n");
		exit(98);
	}
	fd = open(list[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "can't open file %s\n", list[1]);
		exit(98);
	}
	buf = malloc(32);
	fd2 = read(fd, buf, 32);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "can't read file %s\n", list[1]);
		exit(98);
	}
	while (i < 4)
	{
		if (arr[i] != (int)buf[i])
		{
		dprintf(STDERR_FILENO, "%s: Error: %s: Failed to", list[0], list[1]);
		dprintf(STDERR_FILENO, " read file header");
		exit(98);
		}
		i++;
	}
	print_elf_info(buf);
	free(buf);
	return (0);
}
