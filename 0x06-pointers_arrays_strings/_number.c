#include <stdio.h>

/**
 * print_number - takes int and prints the number
 * @n: int arg
 */
void print_number(int n)
{
    char c;
    int p = n;
    int j = n;
    int i;
    int len = 0;

    if (n == 0)
        putchar('0');
    else
    {
        if (n < 0)
        {
            putchar('-');
            n = -n;
        }
        
        // Count the number of digits in n
        while (j != 0)
        {
            len++;
            j = j / 10;
        }
        
        // Create an array to store the digits
        int digits[len];
        
        // Store the digits in the array in reverse order
        for (i = 0; i < len; i++)
        {
            digits[i] = p % 10;
            p = p / 10;
        }
        
        // Print the digits in the original order
        for (i = len - 1; i >= 0; i--)
        {
            c = '0' + digits[i];
            putchar(c);
        }
    }
}

int main(void)
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return 0;
}

