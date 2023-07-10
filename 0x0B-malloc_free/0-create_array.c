#include <stdlib.h>
#include "main.h"
/**
* create _array - create aray and initialize it with specified char
* @size: size of array to create
* @c: charater to insert to the array
* Return: pointer to array created
*/
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return (0);
	char *init_ptr = malloc(sizeof(char)*size);

	for (i = 0; i < size; i++)
	{
		init_ptr[i] = c;
	}
	init_ptr[i] = '\0';
	return (init_ptr);
}
