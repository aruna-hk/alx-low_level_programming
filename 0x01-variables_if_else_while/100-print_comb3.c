#include <stdio.h>
/**
 * main - COMBINATION
 * Description: combination of two digits
 * Return: 0
*/
int main(void)
{
	int i = 48;
	int j;

	while (i < 57)
	{
		for (j = 48; j < 58; j++)
		{
			if (j == i || j == i-1)
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
			{
				continue;
			}
			putchar(44);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
