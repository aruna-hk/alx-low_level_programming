#include <stdlib.h>
#include <stdio.h>
/**
* main -- print content of memory --where function resides
* @argc: number of arguements
* @argv: array of pointers to arguements
* Return: 0--SUCCESS/OTHER EXIT CODES 1 - less arg, 2 < 0 bytes arg
*/
int main(int argc, char *argv[])
{
	unsigned int i = 0;
	unsigned int size;

	char *memoryadd = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < size)
	{
		printf("%02hhx", *memoryadd);
		if ( i != (size - 1))
			printf(" ");
		if (i == (size - 1))
		{
			printf("\n");
			break;
		}
		memoryadd++;
		i++;
	}
	return (0);
}

