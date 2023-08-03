#include "main.h"
/**
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}

/**
* binary_to_uint - convert binary to unsigned int
* @b: string of bits
* Return: number corresponding to bits--unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int default_n = 1;
	unsigned int i = 0;
	unsigned int characters;
	char *str;

	if (b == NULL)
		return (0);

	str = malloc(sizeof(_strlen(b)));
	if (str == NULL)
		return (0);

	characters = _strlen(b) - 1;
	while (characters > 0)
	{
		str[i] = b[characters];
		i++;
		characters--;
	}
	str[i] = b[0];
	i++;
	str[i] = '\0';
	i = 0;
	while (i < _strlen(b))
	{
		if (str[i] != '0' && str[i] != '1')
		{
			return (0);
		}
		if (str[i] == '1')
		{
			num += default_n << i;
		}
		i++;
	}
	return (num);
}
