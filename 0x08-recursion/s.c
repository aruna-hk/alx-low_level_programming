#include <stdio.h>

/**
 * _print_rev_recursion - Prints characters of a string from end to beginning using recursion.
 * @s: String to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return;

    _print_rev_recursion(s + 1);
    putchar(*s);
}

int main(void)
{
    char str[] = "Colton Walker";
    _print_rev_recursion(str);
    putchar('\n');

    return 0;
}

