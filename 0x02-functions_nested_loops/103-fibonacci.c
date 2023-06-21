#include <stdio.h>
/**
* main - fibonacci sequence--EVEN ADD
* Return: 0
*/
int main(int n)
{
	signed long int i = 1;
	signed long int i_2 = 2;
	signed long int a;
	signed long int next;
	signed long sum = 0;

	for (a = 0; a <= 4000000; i++)
	{
		if (a % 2 == 0)
			sum = sum + a;
		next = i + i_2;
		i = i_2;
		i_2 = next;
	}
	printf("\n");
	return (0);
}
