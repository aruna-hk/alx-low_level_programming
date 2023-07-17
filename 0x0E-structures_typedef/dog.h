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
void _puts_recursion(shar *s);
int _putchar(char c);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
#endif
