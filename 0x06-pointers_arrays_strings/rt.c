#include <stdio.h>

char* rot13(char* str) {
    char rot13_e[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int i;
    int num;
    int num2;
    char* ptr_c = str;

    while (*str != '\0') {
        for (i = 0; i < 52; i++) {
            if (*str == rot13_e[i]) {
                if (i <= 25) {
                    num = i + 13;
                    if (num > 25) {
                        num2 = 13 - (25 - i);
                        i = -1;
                        num = num2 - 1;
                    }
                    *str = rot13_e[num];
                }
                else {
                    num = i + 13;
                    if (num > 51) {
                        num2 = 13 - (51 - i);
                        i = 25;
                        num = num2 + 25;
                    }
                    *str = rot13_e[num];
                }
                break;
            }
        }
        str++;
    }
    return ptr_c;
}

int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}

