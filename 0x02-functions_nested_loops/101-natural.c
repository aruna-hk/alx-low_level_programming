#include <stdio.h>

/**
* main - entry
* Return: sum of multiples of 3 and 5
*/
int main(void)
{
	int sum;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3  == 0 || i % 5 == 0)
		{
			sum = sum + i;
			printf("%d", sum);
		}
		else
			continue;
	}
	return (sum);
}