#include "main.h"
/**
* print_alphabet_x10 - lowecasex10
* Return: 0
*/
void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		j = j + 1;
		_putchar('\n');
	}
}
