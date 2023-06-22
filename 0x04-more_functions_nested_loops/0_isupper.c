#include "main.h"

/**
* _isupper - check if ASCII value passed in is uppercase
* @c ascii: value
* Return: 1 if c is caps else 0
*/
int _isupper(int v)
{
	if (v >= 65 && v <= 90)
		return (1);
	else
		return (0);
}
