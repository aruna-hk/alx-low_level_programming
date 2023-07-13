#include "main.h"
#include <stdlib.h>
/**
* 
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(size * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		*((char*)arr + (i * size)) = 0;
	}
	return (arr);
}
