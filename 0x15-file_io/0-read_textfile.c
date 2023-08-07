#include "main.h"
/**
* read_textfile - read ascii file
* @filename: - file to read
* @letters:- number of characters to read
* Return: 1-success -1-falure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t n;
	ssize_t read_to_buffer;
	ssize_t file_descript;

	if (filename == NULL)
		return (0);
	file_descript = open(filename, O_RDONLY);

	if (file_descript == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		close(file_descript);
		return (0);
	}
	read_to_buffer = read(file_descript, buffer, letters);
	if (read_to_buffer == -1)
	{
		free(buffer);
		close(file_descript);
		return (0);
	}
	n = write(1, buffer, read_to_buffer);
	if (n != read_to_buffer)
	{
		close(file_descript);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(file_descript);
	return (n);
}
