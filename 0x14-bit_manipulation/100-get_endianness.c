#include "main.h"
/**
* get_endianness - storage order of data in mem
* Return: 0-big endian/1-litte indian
*/
int get_endianness(void)
{
	int num = 8;
	char *ptr = (char *) &num;

	if (ptr[0] == num)
		return (1);
	return (0);
}
