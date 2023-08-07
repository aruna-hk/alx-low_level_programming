#include "main.h"
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
* create_file --create file and write to it
* @filename: name of file to create
* @text_content: what to write to the file
* Return: 1-sucess -1 faulure
*/
int create_file(const char *filename, char *text_content)
{
	int n, fd;

	if (filename == NULL)
		return (-1);
	if (filename != NULL && text_content == NULL)
	{
		fd = open(filename, O_CREAT, 0600);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}
	n = write(fd, text_content, _strlen(text_content));
	if (n == _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
