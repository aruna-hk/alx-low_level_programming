#include "search_algos.h"

/**
 * linear_search - linear search algorith
 * @array: array to search
 * @size: size of the array
 * @value: key to search
 * Return: -1 if not found index if found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0, idx = -1;

	while (i < size && size != 0 && array != NULL)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			idx = i;
			break;
		}
		i++;
	}
	return (idx);
}
