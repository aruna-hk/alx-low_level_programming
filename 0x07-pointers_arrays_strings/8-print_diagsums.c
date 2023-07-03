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

	for (i =0; i <= (size *size); i = i + size + 1)
		sum_diag1 = sum_diag1 + a[i];
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		sum_diag2 = sum_diag2 + a[j];
	printf("%d, %d\n", sum_diag1,sum_diag2);
}
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
