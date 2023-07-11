#include <stdlib.h>
#include "main.h"
/**
 * _strcat - append string to a string
 * @dest: -destination string
 * @src: -source string
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	char *ptr = dest;

	while (*dest != '\0')
	{
		len++;
		dest++;
	}

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
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
*  _strcpy - copy string to another
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
* str_concat - allocate space in heap to a strinng
*            & append another string to it
* @s1: string arguement (ptr to string)
* @s2: ptr to string arguement
* Return: pointer new concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	char *heap_space;

	if (s1 == NULL && s2 == NULL)
	{
		heap_space = malloc(sizeof(char));
		return (heap_space);
	}
	if (s1 != NULL && s2 == NULL)
	{
		heap_space = malloc(sizeof(s1));
		_strcpy(heap_space, s1);
		return (heap_space);
	}
	if (s1 == NULL &&  s2 != NULL)
	{
		heap_space = malloc(sizeof(s2));
		_strcpy(heap_space, s2);
		return (heap_space);
	}
	heap_space = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (heap_space == 0)
		return (0);
	_strcpy(heap_space, s1);
	 _strcat(heap_space, s2);
	return (heap_space);
}
