#include "main.h"
#include <stdio.h>

/**
* _memset - function fills the first n bytes destination with char provided
* @s:to be filled by b--bytes
* @b:to fill s
* @n: bytes to be filled
* Return:ptr to str s inserting b ntimes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *init_pointer = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (init_pointer);
}
/**
 * print_number - takes int and prints the number
 * @n: int arguement
 */
void print_number(int n)
{
	char c;
	int j = n;
	int i;
	int len = 0;
	int power;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		while (j != 0)
		{
			len++;
			j = j / 10;
		}
		for (i = 0; i < len; i++)
		{
			power = 1;
			for (j = len - 1; j > i; j--)
				power *= 10;
			c = '0' + (n / power);
			_putchar(c);
			n = n % power;
		}
	}
	_putchar('\n');
}
/**
* _puts_recursion - prints string recursively
* @s: ptr to string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
/**
* copy - copy from one file to another
* @from: - source file
* @fname: - file name
* Return: 1-sucess,-1 failure;
*/
int copy(int from, char *fname)
{
	int dest;
	char *buffer;
	int nread;
	int nwrite;

	buffer = malloc(BUFFER);
	dest = open(fname, O_WRONLY | O_TRUNC);

	if (dest == -1)
	{
		dest = open(fname, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	}
	if (dest == -1)
	{
		_puts_recursion("Error: Can't write to ");
		_puts_recursion(fname);
		_putchar('\n');
		return (-1);
	}
	nread = read(from, buffer, BUFFER);
	while (nread != 0)
	{
		if (nread == -1)
			return (-1);
		nwrite = write(dest, buffer, nread);
		if (nwrite != nread)
			return (-1);
		_memset(buffer, 0, BUFFER);
		nread = read(from, buffer, BUFFER);
	}
	return (dest);
}
/**
* main - main entry point
* @argc: number of arguements
* @argv: arguemnets list
* Return: 1-sucess 0- failure and exit codes for d
* different scenarions
*/
int main(int argc, char **argv)
{
	int fd1, fd2, v, j;
	char *errorstring = "Usage: cp file_from file_to ";

	if (argc != 3)
	{
		_puts_recursion(errorstring);
		_putchar('\n');
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		_puts_recursion("Error: Can't read from file ");
		_puts_recursion(argv[1]);
		_putchar('\n');
		exit(98);
	}
	fd2 = copy(fd1, argv[2]);
	if (fd2 == -1)
	{
		_puts_recursion("Error: Can't write to ");
		_puts_recursion(argv[2]);
		_putchar('\n');
		exit(99);
	}
	v = close(fd1);
	j = close(fd2);
	if (v == -1 || j == -1)
	{
		_puts_recursion("Error: Can't close fd FD_VALUE ");
		if (v == -1)
			print_number(fd1);
		if (j == -1)
			print_number(fd2);
		exit(100);
	}
	_putchar('\n');
	return (0);
}
