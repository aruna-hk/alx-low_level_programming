#include <stdio.h>
#include <ctype.h>

void cap_string(char* j) {
    char delimiter[] = ",;.!?\"(){} \t\n";
    char caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char small[] = "abcdefghijklmnopqrstuvwxyz";
    int i, m;
    int prev_delimiter = 1;  // Flag to track the previous delimiter

    for (i = 0; i < 26; i++) {
        if (*j == small[i]) {
            *j = caps[i];
            break;
        }
    }

    while (*j != '\0') {
        for (m = 0; m < 14; m++) {
            if (*j == delimiter[m]) {
                prev_delimiter = 1;
                j++;
                while (*j == ' ' || *j == '\t' || *j == '\n') {
                    j++;
                }
                if (*j != '\0') {
                    for (i = 0; i < 26; i++) {
                        if (*j == small[i]) {
                            *j = caps[i];
                            break;
                        }
                    }
                }
                break;
            }
        }
        
        if (prev_delimiter && *j != '\0' && *j != ' ' && *j != '\t' && *j != '\n') {
            prev_delimiter = 0;
        }
        j++;
    }
}

int main(void) {
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";

    cap_string(str);
    printf("%s", str);
    return 0;
}

