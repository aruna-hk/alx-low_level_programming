#include <stdio.h>
#include "main.h"
/**
* main - count no of arguemets passed
* @argc: name
* @argv: arguements
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
