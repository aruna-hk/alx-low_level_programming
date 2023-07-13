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
	char *arr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*(arr + (i * size)) = 0;
	}
	return (arr);
}
