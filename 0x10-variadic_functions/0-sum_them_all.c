#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum int arguements to a variadic function
* @n: number of passes
* Return:sum/0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i = 0;
	int sum = 0;

	va_start(numbers, n);
	while (i < n)
	{
		sum += va_arg(numbers, int);
		i++;
	}
	va_end(numbers);

	return (sum);
}
