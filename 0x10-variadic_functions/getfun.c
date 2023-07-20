/**
* get_op_func -- find and return pointer to
* respective function to allow arithmetic operation--
* @s: sign string
* Return: pointer to operators function/NULL
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
