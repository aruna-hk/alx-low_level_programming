#include "variadic_functions.h"
#include <stdarg.h>
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
	putchar(*s);
	s++;
	_puts_recursion(s);
}
/**
* print_strings -- print string passed to variadic function
* @separator: separator of words
* @n: number of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list strings;

	va_start(strings, n);
	while (i < n)
	{
		_puts_recursion(va_arg(strings, char *));
		if (i != (n - 1))
			_puts_recursion(separator);
		i++;
	}
	va_end(strings);
	putchar('\n');
}
