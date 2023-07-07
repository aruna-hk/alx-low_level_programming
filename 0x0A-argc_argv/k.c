#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Error: Insufficient arguments\n");
        exit("ERROR");
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    int result = a * b;
    printf("Multiplication: %d\n", result);

    return 0;
}

