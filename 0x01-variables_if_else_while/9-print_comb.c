#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * Description: prints lower case letter
 * Return: 0
*/
int main(void)
{
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
