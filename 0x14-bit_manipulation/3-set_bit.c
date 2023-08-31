#include "main.h"
/**
* set_bit -- set bit at given index to 1
* @n: unsigned no to set its bit
* @index: bit index to turn on
* Return: 1-sucess /-1 if indes out of sizeof unsigned int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int base = 1;

	if (index < (sizeof(unsigned int) * 8))
	{
		*n = *n | (base << index);
		return (1);
	}
	return (-1);
}
