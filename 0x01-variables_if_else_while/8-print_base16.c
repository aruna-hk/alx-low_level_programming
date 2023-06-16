#include <stdio.h>
/**
 * main - HEXADECIMAL
 * Description: prints HEXADECIMAL numbers
 * Return: 0
*/
int main(void)
{
	int i = 48;
	int j = 65;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 71)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
