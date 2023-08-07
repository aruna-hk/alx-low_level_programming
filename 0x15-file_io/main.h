#ifndef MAIN_H
#define MAIN_H
#define BUFFER 1024
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
int _putchar(char c);
void print_number(int n);
char *_memset(char *s, char b, unsigned int n);
void _puts_recursion(char *s);
int _strlen(char *s);
int copy(int from, char *fname, char *ptr);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
