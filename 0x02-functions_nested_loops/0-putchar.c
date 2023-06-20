#include "main.h"
/**
* main - entry point
* Description: takes the function _putchar from main.h header file
* Return: o
*/
int main(void)
{
	int i;
	char putchar[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar('putchar[i]');
	}
	_putchar('\n');
	return (0);
}
