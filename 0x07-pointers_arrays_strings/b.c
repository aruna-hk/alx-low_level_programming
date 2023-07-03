void print_diagsums(int arr[][3], int size) {
    int sum_main_diag = 0;
    int sum_sec_diag = 0;

    // Calculate the sum of the main diagonal and secondary diagonal
    for (int i = 0; i < size; i++) {
        sum_main_diag += arr[i][i];
        sum_sec_diag += arr[i][size - 1 - i];
    }

    // Print the sums
    printf("Sum of the main diagonal: %d\n", sum_main_diag);
    printf("Sum of the secondary diagonal: %d\n", sum_sec_diag);
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

