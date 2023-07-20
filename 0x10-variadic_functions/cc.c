#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct op
{
    char *op;
    void (*func)(va_list);
} op_t;

void print_int(va_list s)
{
    printf("%d", va_arg(s, int));
}

void print_char(va_list s)
{
    printf("%c", va_arg(s, int));
}

void print_string(va_list s)
{
    printf("%s", va_arg(s, char *));
}

void print_float(va_list s)
{
    printf("%f", va_arg(s, double));
}

void (*get_op_func(char *s))(va_list)
{
    int i = 0;

    op_t ops[] = {
        {"c", print_char},
        {"i", print_int},
        {"f", print_float},
        {"s", print_string},
        {NULL, NULL},
    };
    while (ops[i].op != NULL)
    {
        if (strcmp(s, ops[i].op) == 0)
        {
            return (ops[i].func);
        }
        i++;
    }
    return (NULL);
}
void print_all(const char * const format, ...)
{
    char *c;
    strcpy(c,format);
    unsigned int i = 0;
    va_list arguments;
    va_start(arguments, format);

    while (*c != '\0')
    {
        if (get_op_func(c) != NULL)
        {
            get_op_func(c)(arguments);
            i++; // Move to the next character in the format string
        }
        else
        {
            // The character is not a valid operator, skip it
            va_arg(arguments, int);
            i++; // Move to the next character in the format string
        }
    }

    va_end(arguments);
}

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}

