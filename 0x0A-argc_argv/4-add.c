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
	if (argc = 0)
	{
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
