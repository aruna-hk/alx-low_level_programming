#include <stdio.h>
/**
* _puts_recursion - prints string recursively
* @s: ptr to string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
/**
* main -- prints name of file using __FILE__macro
* Return: 0;
*/
int main(void)
{
	char *file_name;

	file_name = __FILE__;
	_puts_recursion(file_name);
	return (0);
}
