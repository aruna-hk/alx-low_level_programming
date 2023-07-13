#include "main.h"
#include <stdlib.h>
/**
* array_range - takes int interval and insert them
* into arr in heap & return ptr to the heap
* @min: lower range
* @max: higher range
* Return: ptr to heap_space --array of elements
*/
int *array_range(int min, int max)
{
	int *arr;
	int *ptr;

	if (min > max)
		return (0);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == 0)
		return (0);
	ptr = arr;
	while (min <= max)
	{
		*arr = min;
		arr++;
		min++;
	}
	return (ptr);
}
