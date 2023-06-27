#include <stdio.h>
/**
* _strcpy - copy string to another
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int len_src = 0;
	int len_dest = 0;
	char *desl = dest;
	char *srcl = src;

	while (*dest != '\0')
	{
		len_dest++;
		dest++;
	}

	while (*src != '\0')
	{
		len_src++;
		src++;
	}
	while (src > srcl)
	{
		while (dest > desl)
		{
			*dest = *src;
			dest--;
			break;
		}
		src--;
	}
	return (dest);
}
