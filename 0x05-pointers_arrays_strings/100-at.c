#include <stdio.h>

int _atoi(char *s)
{
    char *first_pos = NULL;
    char *marker = NULL;
    int value = 0;
    char *last_pos = NULL;

    while (*s != '\0')
    {
        value = (int)(*s);

        if (value >= 48 && value <= 57)
        {
            first_pos = s;
            marker = s;
            while (*marker != '\0')
            {
                value = (int) *marker;
                if ((int)(*marker) >= 48 && (int)(*marker) <= 57)
                    last_pos = marker;
                else
                    break;
                marker++;
            }
            break;
        }
        s++;
    }

    int extracted_number = 0;
    if (first_pos != NULL && last_pos != NULL)
    {
        int multiplier = 1;
        for (char *p = last_pos; p >= first_pos; p--)
        {
            extracted_number = (extracted_number * 10) + ((*p) - '0');
        }
    }
    return extracted_number;
}

int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return 0;
}

