#include "main.h"
/**
* init_dog - initialize variables in structure -dog structure
* @d: ptr to the structure
* @name: name of dog to take name pos
* @age: dogs age arguement
* @owner: owner argument
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
