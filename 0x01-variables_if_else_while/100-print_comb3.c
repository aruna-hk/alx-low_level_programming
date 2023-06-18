#include<stdio.h>
/**
* main - combination of numbers without repetition
* Description: PRINT COMBINATION OF 0-9 USING ANSCII
* Return:0
*/
int main(void)
{
	/*
	*AMSII
	*/
	int i = 48;
	int j;

	while (i <= 57)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			if (i == j || i > j)
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
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}

