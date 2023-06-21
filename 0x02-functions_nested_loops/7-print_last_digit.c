#include "main.h"
#include <stdio.h>

/**
* print_last_digit - check sign of number
* @n: take number
* Return: last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;
	int lastlast;

	if (n < 0)
	{	
		last1 = last * -1;
		last1 = printf("%d%d", last, last);
		return (last1;
	}
	else if (n > 0)
	{
		last1 = printf("%d%d", last, last);
		return (last1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
