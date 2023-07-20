#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
* struct op - Struct op
* @op: The operator
* @f: The function associated
*/
typedef struct op
{
        char *op;
        void (*func)(va_list); 
} op_t;

/**
* print_int - print int from variadic function
* @s: variable list
*/
void print_int(va_list s)
{
        printf("%d", va_arg(s, int));
}
/**
* print_char - print character
* @s: variable list
*/
void print_char(va_list s)
{
        printf("%c", va_arg(s, int));
}
/**
* print_string - from variadic function
* @s: variable lis
*/
void print_string(va_list s)
{
        printf("%s", va_arg(s, char *)); 
}
/**
* print_float - from variadic function
* @s: variable list
*/
void print_float(va_list s)
{
        printf("%f", va_arg(s, double));
}

/**
* get_op_func -- find and return pointer to
* respective function to allow printing of arguement
* @s: sign character
*/
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
        return(NULL);
}

void print_all(const char * const format, ...)
{
	char *my;
	strcpy(my,format);
	unsigned int i = 0;
	va_list arguements;
	va_start(arguements,format);

	while (*my != '\0')
	{
		if (get_op_func(my)!= NULL);
			get_op_func(my)(arguements);

		i++;
	}
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
