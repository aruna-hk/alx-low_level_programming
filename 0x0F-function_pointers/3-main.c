#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
#include "3-op_functions.c"
#include "3-get_op_func.c"

/**
* main - simpl comand line calculattor calculator
* @argc: number of arguements
* @argv: arg list of ptrs to arguements
* Return: exit status
*/
int main(int argc, char *argv[])
{
	char *sign;
	int arg1, arg2;
	int (*op_function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	sign = argv[2];
	op_function = get_op_func(sign);
	if ((strcmp(sign, "%") == 0 || strcmp(sign, "/") == 0) && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (op_function == NULL)
	{
		exit(99);
	}
	printf("%d\n", op_function(arg1, arg2));
	return (0);
}
