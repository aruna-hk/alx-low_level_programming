#include "main.h"
/**
* _strcpy - copy string to another
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	while (*src != 0)
	{
		*dest = *src;
		++src;
	}
	*dest = '\0';
	return (dest);
}
