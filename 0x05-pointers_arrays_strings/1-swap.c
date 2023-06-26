#include "main.h"
/**
* swap_int - swap two numbers using pointers
* @a: first arguement
* @b: second arg
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
