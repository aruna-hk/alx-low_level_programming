#include <stdio.h>

char* _strcat(char* dest, char* src)
{
    char* point_er;
    int len = 0;

    point_er = dest;
    while (*dest != '\0')
    {
        len++;
        dest++;
    }

    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    for (int i = 0; i < len; i++)
    {
        dest--;
    }

    return point_er;
}

int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char* ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);

    return 0;
}

