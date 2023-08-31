#include "main.h"
/**
* get_bit -- get bit value;
* @n: number to check it bit value
* @index: index to check
* Return: value at bit position;
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int base = 1;

	if (index < (sizeof(unsigned int) * 8))
	{
		if ((n & (base << index)) == 0)
			return (0);
		else
			return (1);
	}
	return (-1);
}
