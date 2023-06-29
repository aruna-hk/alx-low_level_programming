#include "main.h"
/**
 * _strncat - append string to the end of a string
 * @dest: - base str
 * @src: - str to append to dest str
 * @n: number of bytes to append
 * Return: dest -- pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}
