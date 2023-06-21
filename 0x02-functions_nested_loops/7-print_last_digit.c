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
	int dd;

	if (n < 0)
	{
		last1 = -last * 10;
		dd = last1 + last;
		return (dd);
	}
	else if (n > 0)
	{
		last1 = last * 10;
		dd = last1 + last;
		return (dd);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
