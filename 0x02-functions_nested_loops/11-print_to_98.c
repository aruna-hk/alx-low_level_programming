#include "main.h"
#include <stdio.h>

/**
* print_to_98 - iterate till 98
* @n: takes number n away from 98
*/
void print_to_98(int n)
{
	if (n > 98)
	{

		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(44);
				_putchar(' ');
				n = n - 1;
			}
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			if (n == 98)
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(44);
				_putchar(' ');
				n = n + 1;
			}
		}
	}
	else
		printf("%d\n", n);
}
