#include "main.h"
/**
* _strlen - finds the string length
* @s: string to find the lengthy
* Return: string length
*/
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
