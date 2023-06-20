#include "main.h"
#include <stdio.h>

/**
* print_to_98 - iterate till 98
* @n: takes number n away from 98
*/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				_putchar('\n');
				continue;
			}
			_putchar(44);
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d,", i);
			if (i == 98)
			{
				_putchar('\n');
				continue;
			}
			_putchar(44);
		}
	}
	else
		printf("%d\n", n);
}
