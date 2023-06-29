#include "main.h"
/**
 * _strcat - append string to a string
 * @dest: -destination string
 * @src: -source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *point_er;
	int len = 0;

	point_er = dest;
	while (*dest != '\0')
		{
		len++;
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	for (int i = 0; i < len; i++)
	{
		dest--;
	}
	return (point_er);
}
