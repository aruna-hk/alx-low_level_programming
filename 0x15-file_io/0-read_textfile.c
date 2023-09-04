#include "main.h"
/**
* read_textfile - read text file and display it to the stdout
* @filename: file name
* @letters: number of characters to read
* Return: number of characters read
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int filedes, nread, nwrite;

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
	{
		perror(filename);
		return (0);
	}
	buffer = malloc(letters);
	nread = read(filedes, buffer, letters);
	if (nread == -1)
		return (0);
	nwrite = write(1, buffer, nread);
	if (nwrite == -1 || nwrite != nread)
		return (0);
	free(buffer);
	close(filedes);
	return (nwrite);
}
