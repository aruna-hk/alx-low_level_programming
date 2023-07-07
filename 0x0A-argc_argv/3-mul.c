#include <stdio.h>
/**
* main - takes two numbers & mult
* @q: 1st arg
* @a: 2nd arg
* Return: mult if arg are 2/error if arg <2
*/
int main (int mul, char *mul[3])
{
	if (mul < 3 || mul > 3)
	{
		printf("Error:arguement error");
		putchar('\n');
	}
	else
	{
		int a = mul[1];
		int b = mul[2];

		printf("%d\n", a * b);
		return (0);
	}
	return (1);
}
