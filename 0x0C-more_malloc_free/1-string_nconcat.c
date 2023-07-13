#include <stdlib.h>
#include "main.h"
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
 * _strncat - append string to the end of a string
 * @dest: - base str
 * @src: - str to append to dest str
 * @n: number of bytes to append
 * Return: dest -- pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (i < n && (*src != '\0'))
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (ptr);
}
/**
* string_nconcat - copies s1 to the heap and concatanate
* with n bytes from s2
* @s1: string arguement
* @s2: str args
* @n: number of bytesto extract from s2
* Return: ptr to concat string inthe heap
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *heap_space;
	char *realloc_heap;
	int len;

	if (n == 0)
		return (s1);
	if (s2 == "NULL")
		return (s1);
	len = _strlen(s1);
	if (len <= n)
	{
		heap_space = malloc(sizeof(char) * (len + 1));
		_strcpy(heap_space, s1);
		_strcat(heap_space, s2);
	}

	heap_space = malloc(sizeof(char) * (len + 1));
	if (heap_space == NULL)
		return (0);
	_strcpy(heap_space, s1);
	realloc_heap = realloc(heap_space, sizeof(char) * n);
	if (realloc_heap == NULL)
		return (0);
	_strncat(realloc_heap, s2, n);
	return (realloc_heap);
}
