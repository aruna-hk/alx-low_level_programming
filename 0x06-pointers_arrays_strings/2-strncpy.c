#include "main.h"
/**
 * _strncpy - append string to the start of a string
 * @dest: - destination string
 * @src: - source string
 * @n: number of bytes to append
 * Return: dest -- pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	dest+1;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	return (dest);
}
