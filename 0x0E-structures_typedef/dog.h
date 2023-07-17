#ifndef DOG_H
#define DOG_H
/**
* struct dog - dog attributes
* @name: dog name
* @age: decimal --float
* @owner: the owner of dog
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
#endif
