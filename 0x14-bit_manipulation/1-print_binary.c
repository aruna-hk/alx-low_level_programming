#include "main.h"
/**
* print_binary -- print binary representation of number
* @n: interger to convert
*/
void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	unsigned int default_n = 1;
	int power = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i < 32)
	{
		if ((default_n << i) > n)
		{
			power = i - 1;
			break;
		}
		i++;
	}
	while (power >= 0)
	{
		if ((default_n << power) > n)
		{
			_putchar('0');
		}
		else
		{
			n -= default_n << power;
			_putchar('1');
		}
		power--;
	}
}
