#include "main.h"

/**
* print_last_digit - check sign of number
* @n: take number
* Return: last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;
	int last1;

	if (n < 0)
	{
		last1 = last * -10;
		return (last + last1);
	}
	else if (n > 0)
	{
		return (last1 + last);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
