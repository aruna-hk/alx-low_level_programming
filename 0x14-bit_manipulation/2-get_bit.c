#include "main.h"
/**
* get_bit -- get bit value;
* @n: interger to convert
* @index: index to extract
* Return: value at bit position;
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int default_n = 1;
	unsigned int def2 = default_n << index;

	if (index < (sizeof(unsigned int) * 8))
	{
		if ((def2 & n) == 0)
			return (0);
		else
			return (1);
	}
	return (-1);
}
