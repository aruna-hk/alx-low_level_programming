#include "main.h"
#include <string.h>
/**
* binary_to_uint - convert binary to unsigned int
* @b: string of bits
* Return: number corresponding to bits--unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int default_num = 1;
	unsigned int num = 0;
	int characters;
	char *str, *ptr;

	if (b == NULL)
		return (0);
	str = malloc(strlen(b) + 1);
	if (str == NULL)
		return (0);
	characters = strlen(b) - 1;
	while (characters >= 0)
	{
		str[i] = b[characters];
		characters--;
		i++;
	}
	str[i] = '\0';
	i = 0;
	ptr = str;
	while (*str != '\0' && (i < (sizeof(unsigned int) * 8)))
	{
		if (*str != '0' && *str != '1')
		{
			free(ptr);
			return (0);
		}
		if (*str == '1')
		{
			num = num | (default_num << i);
		}
		i++;
		str++;
	}
	free(ptr);
	return (num);
}
