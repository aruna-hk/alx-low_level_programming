#include "main.h"
/**
* _strcpy - copy string to another
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	for (i = 0; *dest != '\0'; i++)
	{
		dest[i] = src[i];
	}
	*(dest+1) = '\0';
	return (dest);
}
