#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdarg.h>
/**
* struct format - store the specifiers and respective operations
* @op: oprion /format specifier
* @f: function pointer
*/
struct format
{
	char op;
	void (*f)(va_list);
};
typedef struct format format;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_number(int n);
void _puts_recursion(const char *s);
void (*get_op_func(char s))(va_list);
#endif
