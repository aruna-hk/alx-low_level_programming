#include <unistd.h>
#include "lists.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
* main - entry poiny
* Return: 0-sucess
*/
int main(void)
{
	char *string = "Hello, Holberton";

	_puts_recursion(string);
	return (0);
}
