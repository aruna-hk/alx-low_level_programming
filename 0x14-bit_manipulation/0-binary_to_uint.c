#include "main.h"
#include <stdio.h>
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
	unsigned int default_num = 1;
	unsigned int num = 0;
	int mov;
	unsigned int s_len;

	if (b == NULL)
		return (0);
	s_len = _strlen(b);
	if (s_len > ((sizeof(unsigned int) * 8)))
	{
		mov = s_len - (sizeof(unsigned int) * 8);
		b += mov;
		s_len = 32;
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		if (*b == '1')
			num = num | (default_num << (s_len - 1));
		s_len--;
		b++;
	}
	return (num);
}
