#include "main.h"
/**
* _isupper - check if ASCII value passed in is uppercase
* @c: ASCII value
* Return: 1 if c is caps else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
