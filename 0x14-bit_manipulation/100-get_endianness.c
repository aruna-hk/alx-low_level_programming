#include "main.h"
/**
* get_endianness - get order of storing in a computer
* Return: 0-big endian,1-little endian
*/
int get_endianness(void)
{
	int endianess = 51;
	char *begin = (char *) &endianess;

	if (*begin == 51)
		return (0);
	return (1);
}
