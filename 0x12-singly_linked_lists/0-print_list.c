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
* print_number - takes int print them as characters
* @n: int argument
*/
void print_number(size_t n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/**
* _puts_recursion - prints string recursively
* @s: ptr to string
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
/**
 * print_list - print content of linked list and
 * return the number of elements
 * @h: list pinter
 * Return: nu,mber of elements is the list
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	size_t _len;

	while (h != NULL)
	{
		if (!h->str)
		{
			_puts_recursion("[0] (nil)\n");
		}
		else
		{
			_len = h->len;
			_putchar('[');
			print_number(_len);
			_putchar(']');
			_puts_recursion(h->str);
			_putchar('\n');
		}
		 h = h->next;
		 num++;
	}

	return (num);
}
