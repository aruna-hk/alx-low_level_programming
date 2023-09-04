#include "main.h"
/**
* cpy - copy from on file to another
* @fd_from: from file descriptor
* @fd_to: file to
* Return: -1 failure /0- sucess
*/
int cpy(int *fd_from, int *fd_to)
{
	int nread, nwrite;
	char *buffer;

	buffer = malloc(1024);
	nread = read(*fd_from, buffer, 1024);
	while (nread != -1 || nread != 0)
	{
		nwrite = write(*fd_to, buffer, nread);
		if (nwrite == -1)
			return (-1);
		nread = read(*fd_from, buffer, 1024);
		if (nread == 0)
			break;
	}
	free(buffer);
	return (0);
}
/**
* main - entry of copy program
* @arg: number of arguements
* @arglist: arguement list
* Return: exit status if error/ return 0 if sucsess
*/
int main(int arg, char **arglist)
{
	int fd_to, n, fd_from;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(arglist[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arglist[1]);
		exit(98);
	}
	fd_to = open(arglist[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arglist[2]);
		exit(99);
	}
	n = cpy(&fd_from, &fd_to);
	if (n == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", arglist[2]);
		exit(99);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	return (0);
}
