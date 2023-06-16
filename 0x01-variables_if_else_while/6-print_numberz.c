#include <stdio.h>
/**
 * main - DECIMALS
 * Description: display numbers 0-9 WITH ANSII CODE
 * Return: 0
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
