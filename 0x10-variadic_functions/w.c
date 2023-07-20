#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_all(const char* const format, ...) {
    unsigned int n = strlen(format);
    va_list identifiers;
    va_start(identifiers, format);

    typedef struct {
        char op;
        void* ptr; // Use void* to store a pointer to any type
    } DataType;

    DataType args[] = {
        {'c', va_arg(identifiers, char*)},
        {'i', va_arg(identifiers, int*)},
        {'f', va_arg(identifiers, float*)},
        {'s', va_arg(identifiers, char**)},
        {0, NULL},
    };
    const char *ptr_st = format;
    while (*ptr_st!= '\0') {
        int j = 0;
        while (args[j].op != 0) {
            if (*ptr_st == args[j].op) {
                if (*ptr_st == 'c') {
                    printf("%c\n", *((char*)(args[j].ptr)));
                } else if (*ptr_st == 'i') {
                    printf("%d\n", *((int*)(args[j].ptr)));
                } else if (*ptr_st == 'f') {
                    printf("%f\n", *((float*)(args[j].ptr)));
                } else if (*ptr_st == 's') {
                    printf("%s\n", *((char**)(args[j].ptr)));
                }
                break;
            }
            j++;
        }
        ptr_st++;
    }
    va_end(identifiers);
}

int main(void) {
    char c = 'B';
    int i = 3;
    char* s = "stSchool";

    print_all("ceis", c, i, s);

    return 0;
}
