#include "main.h"
/**
* print_binary - print binary of unsigned int
* @n: int arguement
*/
void print_binary(unsigned long int n)
{
	unsigned int i = 0;

	unsigned int long default_n = 1;

	unsigned int bits = (sizeof(unsigned long int) * 8) - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (((default_n << i) <= n) && (i < (sizeof(unsigned long int) * 8)))
	{
		i++;
	}

	while (i > 0 && ((default_n << i) != (default_n << bits)))
	{
		if ((default_n << (i - 1)) > n)
		{
			_putchar('0');
		}
		else
		{
			_putchar('1');
			n -= default_n << (i - 1);
		}
		i--;
	}
}

