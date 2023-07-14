#include "main.h"
#include <stdlib.h>
/**
* _strcpy - copy string to another
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (ptr);
}
/**
* _memset - function fills the first n bytes destination with char provided
* @s:to be filled by b--bytes
* @b:to fill s
* @n: bytes to be filled
* Return:ptr to str s inserting b ntimes
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *init_pointer = s;

	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (init_pointer);
}
/**
* _realloc - reallocate memory block
* @ptr: pointer to the memory previously allocated,,
* if ptr == null malloic with size new size
* @old_size: size _of_old allocated mem,,
* @new_size: new size to be alloc == 0 & ptr !=0 free ,,
* Return: ptr to allocated bloc
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_ptr = (char *)ptr;
	char *new_heap_space;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL && new_size != 0)
	{
		new_heap_space = malloc(sizeof(char) * new_size);
		_memset(new_heap_space, 0, new_size);
		free(ptr);
		return (new_heap_space);
	}
	if (new_size > old_size)
	{
		new_heap_space = malloc(sizeof(char) * new_size);
		_strcpy(new_heap_space, ptr_ptr);
		free(ptr_ptr);
		_memset(new_heap_space + (old_size - 1), 0, (new_size - old_size + 1));
	}
	return (new_heap_space);
}
