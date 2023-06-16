#include <stdio.h>
/**
 * main - prints lowercase and upper alphabets
 * Description: prints lower and upper case letter
 * Return: 0
*/
int main(void)
{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
