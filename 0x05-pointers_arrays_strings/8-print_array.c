#include "main.h"
/**
* print_array -- display elements of array using pointer arithmetic
* @n: array--list
* @a: pointer to array
*/
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(32);
		}
		i++;
	}
	_putchar('\n');
}
