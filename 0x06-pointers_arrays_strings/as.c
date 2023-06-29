#include <stdio.h>

char *leet(char *str)
{
    char *ptr = str;
    char *leet_chars = "aAeEoOtTlL";
    char *leet_replacements = "4433007711";

    while (*str)
    {
        int i = 0;
        while (leet_chars[i])
        {
            if (*str == leet_chars[i])
            {
                *str = leet_replacements[i];
                break;
            }
            i++;
        }
        str++;
    }

    return ptr;
}
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
