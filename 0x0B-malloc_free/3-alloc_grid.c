#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - allocate 2d array in heap
* @width: number of coulmns of the 2d arrays
* @height: no of rows
* Return: pointer to mem location of 2d array in the heap
*/

int **alloc_grid(int width, int height)
{
	int j;
	int i;
	int **arr = malloc(sizeof(int *) * height);

	if (arr == 0)
		return (0);

	for (i = 0; i < height; i++)
	{	arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == 0)
			return (0);
		j = 0;
		while (j < width)
		{
			*(*(arr + i) + j) = 0;
			j++;
		}
	}
	return (arr);
}
