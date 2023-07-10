#include "main.h"
#include <stdlib.h>
/**
* _strdup - copy string to the heap
* @str: pointer to string arg--to be copied to buffer in heap
* Return: pointer to heap buffer
*/
char *_strdup(char *str)
{
	char *heap_buffer;

	if (_strlen(str) == 0)
		return (0);
	heap_buffer = malloc(sizeof(char) * _strlen(str));
	if (heap_buffer == 0)
		return (0);
	_strcpy(heap_buffer, str);
	return (heap_buffer);
}
