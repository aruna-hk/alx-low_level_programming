#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * Description: prints lower case letter
 * Return: 0
*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
