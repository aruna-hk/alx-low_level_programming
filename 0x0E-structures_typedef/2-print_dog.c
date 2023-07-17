#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
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
* print_dog - print content of dog structure
* @d: pointer to dog structure
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if (d->name == NULL)
	{
		_puts_recursion("Name:(nil)");
		_putchar('\n');
	}
	else
	{
		_puts_recursion("Name:");
		_puts_recursion(d->name);
		_putchar('\n');
	}
	if (d->age == 0)
	{
		_puts_recursion("Age:(nil)");
		_putchar('\n');
	}
	else
	{
		_puts_recursion("Age:");
		printf("%f", d->age);
		_putchar('\n');
	}
	if (d->owner == NULL)
	{
		_puts_recursion("Owner:(nil)");
		_putchar('\n');
	}
	else
	{
		_puts_recursion("Owner:");
		_puts_recursion(d->owner);
		_putchar('\n');
	}
}
