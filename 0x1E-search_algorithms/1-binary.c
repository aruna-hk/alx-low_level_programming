#include "search_algos.h"

/**
 * print_array - print array
 * @array: array to print
 * @s_idx: start index
 * @st_idx: stop index
 */
void print_array(int *array, size_t s_idx, size_t st_idx)
{
	printf("Searching in array:");
	while (s_idx <= st_idx)
	{
		printf(" %d", array[s_idx]);
		if (s_idx != st_idx)
			printf(",");
		s_idx++;
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithh
 * @array: array to search
 * @size: array size
 * @value: search key
 * Return: index -1 if not found or index if
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle;

	while (left <= right && array != NULL && size != 0)
	{
		middle = (left + right) / 2;
		print_array(array, left, right);
		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
			return (middle);
	}
	return (-1);
}
