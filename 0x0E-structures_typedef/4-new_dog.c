#include "dog.h"
#include <stdlib.h>
/**
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}
/**
* _strcpy - copies string to string
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
/**
* new_dog - creating new object fro existing structure --dog
* @name:dogs name
* @age: age of the dog
* @owner:--
* Return: ptr to new dog mem space
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(_strlen(name) + 1);
	if (name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->name, name);
	my_dog->owner = malloc(_strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	_strcpy(my_dog->owner, owner);
	(*my_dog).age = age;
	return (my_dog);
}
