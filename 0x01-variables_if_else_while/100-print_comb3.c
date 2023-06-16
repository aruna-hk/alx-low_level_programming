#include <stdio.h>
/**
 * main - DECIMALS
 * Description: display numbers 0-9 WITH ANSII CODE
 * Return: 0
*/
int main(void)
{
	int i = 48;
	int j ;

	while (i < 58)
	{
		for (j = 48;j < 58;j++ )
		{
			if (j == i)
			{
				j++;
				continue;
			}
			putchar(i);
			putchar(j);
			putchar(44);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
