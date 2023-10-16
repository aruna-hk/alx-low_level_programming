#include "main.h"
/**
* _memcpy -copy n bits of memory area
* @dest: destination
* @src: source
* @n: number to of bits to copy
* Return: copied bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
