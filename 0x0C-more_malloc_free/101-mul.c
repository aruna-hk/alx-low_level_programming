#include <stdlib.h>
#include "main.h"
/**
 * print_number - takes int and prints the number
 * @n: int arguement
 */
void print_number(int n)
{
	char c;
	int j = n;
	int i;
	int len = 0;
	int power;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		while (j != 0)
		{
			len++;
			j = j / 10;
		}
		for (i = 0; i < len; i++)
		{
			power = 1;
			for (j = len - 1; j > i; j--)
				power *= 10;
			c = '0' + (n / power);
			_putchar(c);
			n = n % power;
		}
	}
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
*  _atoi - find occurence of integer in a string
* concert string to interger
* @s: takes a string --arg
* Return: j number from string s
*/
int _atoi(char *s)
{
	int n = 1;
	int i = 0;
	unsigned int j = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			n = -n;
			i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		j = (j * 10) + (s[i] - '0');
		i++;
	}
	j = j * n;
	return (j);
}

/**
* _isdigit - check
* @c: takes char
* Return: 1 if else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/**
* main- multiply arguements and print results
* @argc: number or arguements
* @argv: array of ptr to arguements
* Return: 0
*/
int main(int argc, char *argv[])
{
	int ret;
	char c;
	int num1;
	int num2;
	int mult;

	if (argc != 3)
	{
		_puts_recursion("Error");
		exit(98);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != 0; j++)
		{
			c = argv[i][j];
			ret = _isdigit((int)c);
			if (ret == 0)
			{
				_puts_recursion("Error");
				exit(98);
			}
		}
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	mult = num1 * num2;
	print_number(mult);
	_putchar('\n');
}
