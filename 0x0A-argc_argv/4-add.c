#include <string.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* main - add +ve numbers if non number encounter == error
* @argc: name/size det
* @argv: arguement vector
* Return: 0 succes 1 failure
*/
int main(int argc, char *argv[])
{
	int i = 1;
	unsigned int j;
	unsigned int sum = 0;
	char *ptr_n;

	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			ptr_n = argv[i];
			while (j < strlen(ptr_n))
			{
				if (ptr_n[j] <  '0' || ptr_n[j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(ptr_n);
			i++;
		}
		printf("%u\n", sum);
	}
	else
		printf("0\n");
	return (0);
}
