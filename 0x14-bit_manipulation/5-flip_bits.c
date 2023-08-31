#include "main.h"
#include <stdio.h>
/**
* flip_bits - determine number of bits to flip to get to give number
* @n: unsigned int arg  to arrive at
* @m: unsigned int --check bits to flip to n
* Return: number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int default_mask = 1;
	unsigned int count = 0;
	unsigned int x_or = n ^ m;

	unsigned int i = 0;

	while (1)
	{
		if ((x_or & (default_mask << i)) != 0)
		{
			count++;
		}
		x_or = x_or & (~(default_mask << i));
		if (x_or == 0)
			break;
		i++;
	}
	return (count);
}
