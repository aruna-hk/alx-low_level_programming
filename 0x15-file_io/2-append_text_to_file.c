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
* append_text_to_file - function that append txt to a file
* @filename: file to append txt
* @text_content: what to append to the end of file
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1 || text_content == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	len = _strlen(text_content);
	fd2 = write(fd, text_content, len);
	if (fd2 == -1 )
		return (-1);
	return (1);
}
