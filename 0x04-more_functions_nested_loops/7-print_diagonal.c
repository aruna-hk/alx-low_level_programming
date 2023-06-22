#include "main.h"
/**
* print_diagonal - provided length
* @n: lengt param
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0)
		_putchar(36);
	else
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i > j)
					_putchar(32);
				else
				{
					_putchar(47);
					_putchar(36);
				}
			}
			putchar('\n');
		}
}
