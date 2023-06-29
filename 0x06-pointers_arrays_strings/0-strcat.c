#include "main.h"
/**
 * _strcat - append string to the end of a string
 * @dest: - base str
 * @src: - str to append to dest str
 * Return: dest -- pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	char *point_er;

	point_er = dest;
	while (*dest != 0)
	{
		dest++;
	}
	while (*src != 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	point_er = dest;
	return (point_er);
}
