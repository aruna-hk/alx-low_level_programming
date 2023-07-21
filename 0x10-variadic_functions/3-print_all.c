#include "variadic_functions.h"
/**
* print_int -print in fro variadic function
* @s: variable arguement list
*/
void print_int(va_list s)
{
	printf("%d", va_arg(s, int));
}

/**
* print_char - print characters in variadic list
* @s: variable list
*/
void print_char(va_list s)
{
	printf("%c", va_arg(s, int));
}

/**
* print_string - from variadic function
* @s: variable list
*/
void print_string(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
/**
* print_float - print float
* @s: variable list
*/
void print_float(va_list s)
{
	printf("%f", va_arg(s, double));
}
/**
* get_op_func - get function to print the output
* @s: character specify type to be printed  tell va_arg what to
* expect
* Return: pointe to a function that takes va_list and return NULL
*/
void (*get_op_func(char s))(va_list)
{
	int i = 0;

	format ops[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL},
		};

	while (ops[i].op != '\0')
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
/**
* print_all - print all the arguements passed
* aby data type in format string
* @format: format specifiers for different data types
*/
void print_all(const char * const format, ...)
{
	unsigned int len = strlen(format);
	va_list args1;
	unsigned int i = 0;
	char j;
	void (*ptr_func)(va_list);

	va_start(args1, format);
	while (i < len)
	{
		j = format[i];

		ptr_func = get_op_func(j);
		if (ptr_func != NULL)
		{
			ptr_func(args1);
			if (i != (len - 1))
				printf(", ");
		}
		i++;
	}
	va_end(args1);
	printf("\n");
}
