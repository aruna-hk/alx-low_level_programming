#include "main.h"
/**
* print_sign - check sign of number
* @n: take number
* Return: 1 if + 0 if false 0 -1 if -ve
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
