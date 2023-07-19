#include "function_pointers.h"
/**
* int_index - iterate through array and pass every
* element of arr a function
* @array:array of elements to pass to a function
* @size: size of array
* @cmp: function pointer
* Return: -1 failure, index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int c;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		c = (*cmp)(array[i]);
		if (c != 0)
			return (i);
		i++;
	}
	return (-1);
}
