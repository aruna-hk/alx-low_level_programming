#include "main.h"
/**
* set_bit -- set bit at given index to 1
* @n: ptr to number
* @index: bit index to turn on
* Return: 1-sucess /-1failur
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int defa_ult = 1;
	unsigned int default_2 = defa_ult << index;

	if (index < (sizeof(unsigned int) * 8))
	{
		*n = *n | default_2;
		return (1);
	}
	return (-1);
}
