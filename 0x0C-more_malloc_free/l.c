#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void *malloc_checked(unsigned int b) {
    void *heap_space = malloc(b);
    if (heap_space == NULL) {
        exit(98);
    }
    return heap_space;
}

int main(void) {
    char *c;
    int *i;
    float *f;
    double *d;

    c

