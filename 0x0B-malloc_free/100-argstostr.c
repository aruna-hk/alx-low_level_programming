#include "main.h"
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
	char *ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\n';
	return (ptr);
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
	*dest = '\n';
	return (ptr);
}
/**
* argstostr - takes arg array - create space in heap and store em
* delimited by newline
* @s:no of args
* @arr: arr of pointers to string args
* Return: ptr to heap space
*/
char *argstostr(int s, char **arr)
{
	char *arg_space;
	int i;
	int arglen = 0;

	if (s <= 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		arglen += _strlen(arr[i]);
	arg_space = malloc(sizeof(char) * (arglen + s + 1));
	if (arg_space == NULL)
		return (NULL);
	_strcpy(arg_space, arr[0]);
	for (i = 1; i < s; i++)
	{
		_strcat(arg_space, arr[i]);
	}
	*(arg_space + (arglen + s + 1)) = '\0';
	return (arg_space);
}
