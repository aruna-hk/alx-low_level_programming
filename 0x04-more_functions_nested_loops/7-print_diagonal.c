#include "main.h"
/**
* print_diagonal - provided length
* @n: lengt param
*/
void print_diagonal(int n)
{
	int i;
	int l;

	if (n <= 0)
	{
		_putchar(36);
		_putchar('\n');
	}
	else
		for (i = 0; i < n; i++)
		{
			for (l = 0; l <  i ; l++)
			{
				_putchar(' ');
			}
			_putchar(47);
			_putchar(36);
			_putchar('\n');
		}
		_putchar('\n');
}
