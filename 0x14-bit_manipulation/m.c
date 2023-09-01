#include <stdio.h>

void print_binary(unsigned long long int n)
{
    unsigned long int base = 1ULL << ((sizeof(unsigned long int) * 8) - 1);

    if (n == 0)
    {
        putchar('0');
        return;
    }
    
    while (base > 0)
    {
        if ((base & n) != 0)
            putchar('1');
        else
            putchar('0');
        
        base = base >> 1;
    }
}

int main()
{
    unsigned long long int num = 954372342312;
    print_binary(num);
    printf("\n");
    return 0;
}

