#include "main.h"
/**
* _memcpy - copies n bytes from memory are src to dest
* @dest: destination of the copy
* @src: source of the copy
* @n:bytes to copy from src
* Return:ptr to dest--dest content
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *init_pointer = dest;

	while (i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	return (init_pointer);
}
