#include "main.h"
/**
* print_diagonal - provided length
* @n: lengt param
* Return: null
*/
void print_diagonal(int n)
{
	int i;
	int l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (l = 0; l <  i ; l++)
			{
				_putchar(32);
			}
			_putchar(97);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
