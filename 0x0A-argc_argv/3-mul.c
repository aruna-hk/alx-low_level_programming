#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* main - takes two numbers & mult
* @argc: name
* @argv: arguement vector
* Return: mult if arg are 2/error if arg <2
*/
int main(int argc, char *argv[])
{
	int i;
	int j

	if (argc != 3)
	{
		printf("Error");
		putchar('\n');
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
		return (0);
	}
}
