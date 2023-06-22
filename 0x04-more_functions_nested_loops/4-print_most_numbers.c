#include "main.h"
/**
* print_most_numbers - from 0_9 execp 2 and 4
* Return: null
*/
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 51 || i == 53)
			continue;
		_putchar(i);
	}
	_putchar('\n');
}
