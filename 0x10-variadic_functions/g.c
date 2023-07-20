#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_all(const char* const format, ...) {
    unsigned int i = 0;
    unsigned int j = 0;
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
        {0, NULL}, // Use 0 as the sentinel value instead of NULL
    };

    while (format[i] != '\0') {
        j = 0;
        while (args[j].op != 0) {
            if (format[i] == args[j].op) {
                if (format[i] == 'c') {
                    printf("%c\n", *((char*)(args[j].ptr)));
                } else if (format[i] == 'i') {
                    printf("%d\n", *((int*)(args[j].ptr)));
                } else if (format[i] == 'f') {
                    printf("%f\n", *((float*)(args[j].ptr)));
                } else if (format[i] == 's') {
                    printf("%s\n", *((char**)(args[j].ptr)));
                }
                break;
            }
            j++;
        }
        i++;
    }

    va_end(identifiers);
}

int main(void) {
    print_all("ceis", 'B', 3, "stSchool");
    return 0;
}

