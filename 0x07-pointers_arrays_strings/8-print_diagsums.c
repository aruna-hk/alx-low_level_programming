#include <stdio.h>
# include "main.h"
/**
* print_diagsums - sum of diagonam of multidensional array
* @a: rows
* @size: olumn size
*/
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum_diag1 = 0;
	int sum_diag2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum_diag1 = sum_diag1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum_diag2 = sum_diag2 + a[j];
	printf("%d, %d\n", sum_diag1, sum_diag2);
}
