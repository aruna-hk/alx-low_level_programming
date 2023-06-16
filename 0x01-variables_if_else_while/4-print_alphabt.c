#include <stdio.h>
/**
 * main - prints lowercase
 * Description: prints lower case letter execpt p and q
 * Return: 0
*/
int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i == 101 || i == 113)
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
