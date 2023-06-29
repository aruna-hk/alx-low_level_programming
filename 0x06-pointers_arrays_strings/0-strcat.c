#include "main.h"
/**
 * _strcat - append string to the end of a string
 * @dest: - string to be added
 * @src: - str to append to dest str
 * Return: *src
*/
char *_strcat(char *dest, char *src)
{
	char *point_er;

	point_er = dest;
	while (*dest != 0)
	{
		dest++;
	}
	*dest = '\0';
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (point_er);
}
