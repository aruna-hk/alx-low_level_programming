#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct op
{
    char *op;
    void (*f)(va_list);
} op_t;

void print_int(va_list s)
{
    printf("%d", va_arg(s, int));
}

void print_char(va_list s)
{
    printf("%c", va_arg(s, int)); // Use int for char types in va_arg
}
void print_string(va_list s)
{
    char *str = va_arg(s, char *);

    if (str == NULL)
    {
        // The string is not allocated
        return;
    }

    printf("%s", str);
}
void print_float(va_list s)
{
    printf("%f", va_arg(s, double)); // Use double for float types in va_arg
}

void (*get_op_func(const char *s))(va_list)
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
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}

void print_all(const char *const format, ...)
{
    unsigned int i = 0;
    va_list identifiers;
    va_start(identifiers, format);

    while (format[i] != '\0')
    {
        void (*func_ptr)(va_list) = get_op_func(&format[i]);
        if (func_ptr != NULL)
        {
            func_ptr(identifiers);
        }
        i++;
    }

    va_end(identifiers);
}

int main(void)
{
    print_all("ceis", 'B', 300, "stSchool");
    return (0);
}

