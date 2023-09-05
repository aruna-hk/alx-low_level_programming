#ifndef FILE_IO
#define FILE_IO
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int cpy(int *fd_from, int *fd_to, char *name_from);
int append_text_to_file(const char *filename, char *text_content);
void padding(char *string);
void _os_abi(int n);
void print_elf_info(char *buffer);
void os_abi2(int n);
void os_abi1(int n);
void print_os_abi(int n, char *os);
#endif
