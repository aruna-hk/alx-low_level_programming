#include<stdio.h>
/**
* main - combination
* Description: combination 00-99
* Return: 0
*/
int main(void)
{
	int i = 48;
	int j;

	while (i <= 57)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
			{
				continue;
			}
			putchar(44);
			putchar(32);
		}
		i = i + 1;
	}
	putchar('\n');
	return (0);
}

