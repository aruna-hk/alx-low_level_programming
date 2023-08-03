#include "main.h"
/**
* flip_bits - determine number of bits to flip to get to give number
* @n: int arg
* @m: int arg
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int default_mask = 1;
	unsigned int i = 0;
	unsigned int count = 0;
	unsigned int difference = n ^ m;

	while (i < (sizeof(unsigned int) * 8))
	{
		if ((difference & (default_mask << i)) != 0)
		{
			count++;
		}
		difference = difference & (~(default_mask << i));
		if (difference == 0)
			break;
		i++;
	}
	return (count);
}
