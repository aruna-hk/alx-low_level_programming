#include <stdio.h>
/**
 * main - numbers 0-9
 * Description: display numbers 0-9
 * Return: 0
*/
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
