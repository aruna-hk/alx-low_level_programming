#include "main.h"
/**
* append_text_to_file - function that append txt to a file
* @filename: file to append txt
* @text_content: what to append to the end of file
* Return: 1-sucess -1 failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd2, len = 0;
	char *c = text_content;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1 || text_content == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (*c != '\0')
		len++;
	fd2 = write(fd, text_content, len + 1);
	if (fd2 == -1)
		return (-1);
	return (1);
}
