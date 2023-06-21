#include <stdio.h>
/**
* main - fibonacci sequence
* Return: 0
*/
int main(void)
{
	signed int i = 1;
	signed int i_2 = 2;
	signed int a;
	signed int next;

	printf("%d,%d, ", i, i_2);
	for (a = 3; a <= 50; a++)
	{
		next = i + i_2;
		printf("%d,", next);
		i_2 = next;
		i = i_2;
	}
	return (0);
}
