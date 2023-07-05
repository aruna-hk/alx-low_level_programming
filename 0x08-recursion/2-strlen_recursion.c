#include "main.h"
/**
* _strlen_recursion - checks string length
* @s: string arguement
* Return: int string lenth
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
