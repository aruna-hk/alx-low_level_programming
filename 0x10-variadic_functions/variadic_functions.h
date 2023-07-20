#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_number(int n);
void _puts_recursion(const char *s);
#endif
