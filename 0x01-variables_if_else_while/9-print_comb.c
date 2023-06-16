#include <stdio.h>
/**
 * main - DECIMAL
 * Description: pRINT 0-9 SEPARATED BY ,
 * Return: 0
*/
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i == 57)
		{
			i++;
			continue;
		}
		putchar(44);
		putchar(32);
		i++;
	}
	putchar('\n');
	return (0);
}
