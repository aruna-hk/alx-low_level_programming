#include<stdio.h>
/**
* main - combination of numbers without repetition
* Description: PRINT COMBINATION OF 0-9 USING ANSCII
* Return:0
*/
int main(void)
{
	/*
	*AnSII
	*/
	int i = 48;
	int k,j;

	while (i <= 57)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			if (i == j || i > j)
			{
				continue;
			}
			else
			for (k = 49;k <= 57;k++)
			{
 				if(k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (j == 56 && i == 55)
					{
						continue;
					}
					putchar(44);
					putchar(32);
				}
				else
					continue;
	         	}

		}
		i++;
	}
	putchar('\n');
	return (0);
}

