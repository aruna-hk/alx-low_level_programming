#include "main.h"
#include <stdio.h>
/**
* main - display arguments it recieve
* @argc:number of parameters
* @argv: arg list
* Return: 0 sucess
*/
int main(int argc, int *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0)
}
