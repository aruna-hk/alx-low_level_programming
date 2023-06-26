#include "main.h"
/**
* print_rev - print arg in reverse
* @s: pointer to the string literal to operate on
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	while (len >= 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
