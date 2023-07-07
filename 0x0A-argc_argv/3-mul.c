#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* main - takes two numbers & mult
* @argc: name
* @argv: arguement vector
* Return: 0-sucess 1 -error
*/
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int mult;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mult = i * j;
		printf("%d\n", mult);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
