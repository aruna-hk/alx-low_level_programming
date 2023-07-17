#include <stdlib.h>
#include "dog.h"
/**
* free_dog - free dog struct in the memory
* @d: takes dog struct
**/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free((*d).name);
		free((*d).owner);
		free(d);
	}
}
