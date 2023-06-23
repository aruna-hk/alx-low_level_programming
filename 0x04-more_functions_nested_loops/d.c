#include<stdio.h>
int largestPrimeFactor(int num) {
    int largestFactor = 2;
    
    while (num > largestFactor) {
        if (num % largestFactor == 0) {
            num /= largestFactor;
        } else {
            largestFactor++;
        }
    }
    
    return largestFactor;
}

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int largestPrime = largestPrimeFactor(number);
    
    printf("Largest prime factor of %d is: %d\n", number, largestPrime);
    
    return 0;
}
