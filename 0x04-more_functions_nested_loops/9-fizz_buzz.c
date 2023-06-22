#include <stdio.h>

/**
* main - fizz buzz tsts
* Return: 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
			if (i == 100)
				continue;
			printf(", ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
			if (i == 100)
				continue;
			printf(", ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
			if (i == 100)
				continue;
			printf(", ");
		}
		else
		{
			printf("%d", i);
			if (i == 100)
				continue;
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
