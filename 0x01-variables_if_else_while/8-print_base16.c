#include <stdio.h>
/**
 * main - HEXADECIMAL
 * Description: prints HEXADECIMAL numbers
 * Return: 0
*/
int main(void)
{
	int i = 48;
	int j = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (j < 103)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
