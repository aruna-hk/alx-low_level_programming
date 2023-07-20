#include "variadic_functions.h"
/**
* print_number - takes int print them as characters
* @n: int argument
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/**
* _puts_recursion - prints string recursively
* @s: ptr to string
*/
void _puts_recursion(const char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
/**
* print_numbers -- print arguement--numbers with delimitor
* @separator: separate the numbers
* @n: number of args
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list numbers;

	va_start(numbers, n);
	while (i < n)
	{
		print_number(va_arg(numbers, int));
		if (i != (n - 1) && separator != NULL)
			_puts_recursion(separator);
		i++;
	}
	va_end(numbers);
	_putchar('\n');
}
