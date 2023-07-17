#include <stdio.h>
#include "dog.h"
/**
* init_dog - initilaise dog structure
* @d: ptr to the structure
* @name: name of the a dog to insert into structure
* @age:age arg of the dog
* @owner:owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
