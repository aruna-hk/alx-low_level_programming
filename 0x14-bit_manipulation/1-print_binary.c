#include "main.h"
/**
* print_binary - print binary representation of a number
* @n: number to print its binary representation
*/
void print_binary(unsigned long int n)
{
	unsigned long int base = 1ULL << ((sizeof(unsigned long int) * 8) - 1);

	if (n == 0)
	{
		putchar('0');
		return;
	}
	while ((base & n) == 0)
		base = base >> 1;
	while (base > 0)
	{
		if ((base & n) != 0)
			putchar('1');
		else
			putchar('0');
		base = base >> 1;
	}
}
