#include "3-calc.h"
/**
* get_op_func -- find and return pointer to
* respective function to allow arithmetic operation
* @s: sign string
* Return: pointer to operators function/NULL
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[]={
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return(ops[i].f);
		}i++;
	}
	printf("Error\n");
	return (NULL);
}
