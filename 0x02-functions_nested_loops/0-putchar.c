#include "main.h"
/**
* main - entry point
* Description: takes the function _putchar from main.h header file
* Return: o
*/
int main(void)
{
	char putchar[] = "_putchar";
	int i;
	char a;

	for (i = 0; i <= 7; i++)
	{
		char a = putchar[i];

		_putchar(a);
	}
	_putchar('\n);
	return (0);
}
