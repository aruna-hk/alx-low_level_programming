#include "main.h"
#include <stdlib.h>
/**
* free_grid - free alocated multidimensional arra-- case 2d
* @grid: takes 2d array as arguement
* @height: number of rows arguemnt
*/
void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
