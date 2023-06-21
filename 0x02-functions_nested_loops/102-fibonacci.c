#include <stdio.h>
/**
* main - fibonacci sequence
* Return: 0
*/
int main(void)
{
	signed long int i = 1;
	signed long int i_2 = 2;
	signed long int a;
	signed long int next;

	printf("%ld, %ld, ", i, i_2);
	for (a = 3; a <= 50; a++)
	{
		next = i + i_2;
		printf("%ld", next);
		if (a != 50)
			printf(", ");
		i = i_2;
		i_2 = next;
	}
	printf("\n");
	return (0);
}
