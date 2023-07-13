#include <stdlib.h>
#include <stdio.h>
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
	int **arr;

	if (width <= 0 || height <= 0)
		return (0);
	arr = malloc(sizeof(int *) * height);
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

/**
* free_grid - free alocated multidimensional array-- case 2d
* @grid: takes 2d array as arguement
* @height: number of rows arguemnt
*/
void free_grid(int **grid, int height)
{
        int i;

        for (i = 0; i < height; i++)
        {
                free(grid[i]);
        }
        free(grid);
}

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;
   int he = height;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}
