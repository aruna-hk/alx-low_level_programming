#include "main.h"
/**
* _islower - check if ASCII value passed in is uppercase
* @c: ASCII value
* Return: 1 if c is caps else 0
*/

int _islower(int c)
{
	if (c >= 96 && c <= 122)
		return (1);
	return (0);
}
