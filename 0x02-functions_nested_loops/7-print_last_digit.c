#include "main.h"
#include <stdio.h>
/**
* print_last_digit - check sign of number
* @n: take number
* Return: last digit
*/
int print_last_digit(int n)
{
	if (n < 0)
	{
		printf("%d", n);
		return ((n % 10) * -1);
	}
	else if (n > 0)
	{
		printf("%d", n);
		return (n % 10);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
