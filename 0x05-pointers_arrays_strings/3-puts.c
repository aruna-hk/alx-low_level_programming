#include "main.h"
/**
* _puts - display the str passed
* @str: -take the string
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
