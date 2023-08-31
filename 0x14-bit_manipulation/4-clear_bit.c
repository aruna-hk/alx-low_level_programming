#include "main.h"
/**
* clear_bit -- set bit index  to zer0
* @n: address to unsigned int
* @index: pos to turn off
* Return: 1- sucess / 2- failure if bit to set beyond the range
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int base = 1;

	if (index < (sizeof(unsigned int) * 8))
	{
		*n = *n & (~(base << index));
		return (1);
	}
	return (-1);
}
