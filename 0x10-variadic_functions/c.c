#include <stdio.h>
#include <stdarg.h>
#include <string.h>

void print_all(const char* const format, ...) {
    unsigned int n = strlen(format);
    unsigned int i = 0;
    unsigned int j = 0;
    va_list identifiers;
    va_start(identifiers, format);

    typedef struct {
        char* op;
        void* ptr; // Use void* to store a pointer to any type
    } DataType;

    DataType args[] = {
        {"c", va_arg(identifiers, char*)}, 
        {"i", va_arg(identifiers, int*)},      // int*
        {"f", va_arg(identifiers, float*)},    // float*
        {"s", va_arg(identifiers, char**)},    // char**
        {NULL, NULL},
    };
	while (*format != '\0')
	{
		j = 0;
		while (args[j].op != NULL)
		{
			if ((strcmp(*format,(char)args[j].op)) == 0)
			{
				char identifier = args[i].op;
				printf("%(identifier)\n",args[i].ptr);
			}
			j++;
		}
		format++;
	}
    va_end(identifiers);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}
