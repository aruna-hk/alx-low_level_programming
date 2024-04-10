#include <stdio.h>
/**
 * binary_search - binary search algorithm
 * @array: sorted array
 * @size: size of array
 * @value: value to search
 * Return: idex if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, l, r, i;

	if (array == NULL || array[0] > value)
		return (-1);
	l = 0;
	r = size - 1;
	mid = (r - l) / 2;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i == r)
				printf("\n");
			else
				printf(", ");
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			r = mid - 1;
			mid = l + (r - l) / 2;
		}
		else
		{
			l = mid + 1;

			mid = l + (r - l) / 2;
		}
	}
	return (-1);
}
