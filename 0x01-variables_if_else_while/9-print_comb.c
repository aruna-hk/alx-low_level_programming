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
		putchar(44);
		i++;
	}
	putchar('\n');
	return (0);
}
