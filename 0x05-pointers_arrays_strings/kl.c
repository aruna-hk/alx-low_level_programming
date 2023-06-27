#include <stdio.h>

int _atoi(char *s)
{
    char *first_pos;   // Updated: Added comment indicating variable purpose
    int value;
    char *last_pos;    // Updated: Added comment indicating variable purpose

    while (*s != '\0')
    {
        value = (int)(*s);   // Updated: Added comment indicating variable assignment
        if (value >= 48 && value <= 57)
        {
            first_pos = s;   // Updated: Added comment indicating variable assignment
            last_pos = first_pos;   // Updated: Added comment indicating variable assignment
            for (s = first_pos; *s != '\0'; s++)
            {
                if ((int)(*s) >= 48 && (int)(*s) <= 57)
                {
                    last_pos++;   // Updated: Added comment indicating variable update
                }
                else
                {
                    break;
                }
            }
            break;
        }
        s++;
    }

    int extracted_number = 0;   // Updated: Added comment indicating variable initialization
    if (first_pos != NULL && last_pos != NULL)
    {
        int multiplier = 1;   // Updated: Added comment indicating variable initialization
        for (char *p = last_pos; p >= first_pos; p--)
        {
            extracted_number += ((*p) - '0') * multiplier;   // Updated: Added comment indicating variable update
            multiplier *= 10;   // Updated: Added comment indicating variable update
        }
    }

    return extracted_number;   // Return the extracted number
}

int main(void)
{
    int nb;

    nb = _atoi("98");   // Extract and convert the number "98"
    printf("%d\n", nb);
    nb = _atoi("-402");   // Extract and convert the number "-402"
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");   // Extract and convert the number "-98"
    printf("%d\n", nb);
    nb = _atoi("214748364");   // Extract and convert the number "214748364"
    printf("%d\n", nb);
    nb = _atoi("0");   // Extract and convert the number "0"
    printf("%d\n", nb);
    nb = _atoi("Suite 402");   // Extract and convert the number "402"
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");   // Extract and convert the number "-98"
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");   // Extract and convert the number "402"
    printf("%d\n", nb);
    return 0;
}

