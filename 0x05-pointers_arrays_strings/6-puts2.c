#include <stdio.h>
/**
* print_rev - print arg in reverse
* @s: pointer to the string literal to operte on
*/
void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		*s++;
	}
	while (len >= 0)
	{
		putchar(*s);
		*s--;
		len--;
	}
	putchar('\n');
}

