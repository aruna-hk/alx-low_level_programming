#include <stdio.h>
/**
 * linear_search - linear search algorith
 * @array: pointer to array to search
 * @size: size of th array
 * @value: value to search
 * Return: return -1 if not avaliable or index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
