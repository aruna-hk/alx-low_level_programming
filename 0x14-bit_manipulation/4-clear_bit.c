#include "main.h"
/**
* clear_bit -- set bit index  to zer0
* @n: address to unsigned int
* @index: pos to turn off
* Return: 1- sucess / 2- failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int default_num = 1;
	unsigned int neg_default = default_num << index;

	neg_default = ~neg_default;
	if (index < (sizeof(unsigned int) * 8))
	{
		*n = *n & neg_default;
		return (1);
	}
	return (-1);
}
