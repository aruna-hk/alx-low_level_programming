#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocate memory for array of elements provided
* with user defined size--elements size
* @nmemb: number of elements;
* @size: size of each elemenys
* Return: ptr to elements  -- initialized to zeroos --this case
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	arr = malloc(size * nmemb);
	if (arr == 0)
		return (0);
	for (i = 0; i < nmemb; i++)
	{
		*((char *)arr + size) = 0;
		if (i != nmemb - 1)
			arr + size;
	}
	return (arr);
}
