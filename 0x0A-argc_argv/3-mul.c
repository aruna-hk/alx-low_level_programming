#include <stdio.h>
/**
* main - takes two numbers & mult
* @argc: name
* @argv: arguement vector
* Return: mult if arg are 2/error if arg <2
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error:arguement error");
		putchar('\n');
		return (1);
	}
	else
	{

		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}
}
