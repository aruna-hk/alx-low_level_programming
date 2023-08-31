#include "main.h"
/**
* get_endianness - storage order of data in mem
* Return: 0-big endian/1-litte indian
*/
int get_endianness(void)
{	int number = 0XABCDEF10;
	unsigned char check = *((unsigned char *) &number);

	if (check == 0x10)
		return (1);
	return (0);
}

