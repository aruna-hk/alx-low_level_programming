#include "main.h"
/**
* _isalpha - check if characfter is  alphbet
* @c: character
* Return: 1 if 0 if not
*/
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97)  || (c >= 65 && c <= 90))
		return (1);
	return (0);
}

