#include "main.h"
/**
 * print_number - takes int and prints the number
 * @n: int arguement
 */
void print_number(int n)
{
	char c;
	int j = n;
	int i;
	int len = 0;
	int power;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		while (j != 0)
		{
			len++;
			j = j / 10;
		}
		for (i = 0; i < len; i++)
		{
			power = 1;
			for (j = len - 1; j > i; j--)
				power *= 10;
			c = '0' + (n / power);
			_putchar(c);
			n = n % power;
		}
	}
	_putchar('\n');
}
