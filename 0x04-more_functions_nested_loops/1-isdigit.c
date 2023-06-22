#include "main.h"

/**
* _isdigit - check
* @c: takes char
* Return: 1 if else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
