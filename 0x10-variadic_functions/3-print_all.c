#include "variadic_functions.h"

/**
* print_all - print arguements based on format specifiers
* @format: arguement list
*/
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;

	va_list args1;

	va_start(args1, format);
	while (i < strlen(format))
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args1, int));
				break;
			case 'i':
				printf("%d", va_arg(args1, int));
				break;
			case 'f':
				printf("%f", va_arg(args1, double));
				break;
			case 's':
				str = va_arg(args1, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		if (i != (strlen(format) - 1))
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(args1);
}
