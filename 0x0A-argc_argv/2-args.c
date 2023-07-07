#include "main.h"
#include <stdio.h>
/**
* main - display arguments it recieve
* @argc:
* @argv: arg list
*/
int main(int arg, int *argv[])
{
	int i = 0;

	while(i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0)
}
