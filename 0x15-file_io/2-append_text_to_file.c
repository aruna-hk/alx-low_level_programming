#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
* append_text_to_file -append text to the end of the file
* @filename: to insert text to its end
* @text_content: what to append
* Return: 1-sucess, 0-failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int n, fd;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	n = write(fd, text_content, _strlen(text_content));
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
