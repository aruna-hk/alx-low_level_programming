#include <stdio.h>
/**
* _isupper - check if uppercase or lower
* @c: input
* Return: 1 if c is caps else 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
