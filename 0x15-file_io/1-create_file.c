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
* create_file - create a file and insert txt
* @filename: name of the file to create
* @text_content: what to write to the file
* Return: -1 failure/ 1-sucess
*/
int create_file(const char *filename, char *text_content)
{
	int fd, nwrite, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(filename, O_WRONLY | O_CREAT, 0600);
		if (fd == -1)
			return (-1);
	}
	if (text_content == NULL)
		return (1);
	len = _strlen(text_content);
	nwrite = write(fd, text_content, len);
	if (nwrite == -1 || nwrite != len)
		return (-1);
	return (1);
}
