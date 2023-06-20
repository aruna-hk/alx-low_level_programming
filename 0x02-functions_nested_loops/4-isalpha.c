#include "main.h"
/**
* _isalpha - lowecase
* @c: ascii num
* Return: 1 if tue 0 if false
*/
int _isalpha(int c)
{
	if (c > 97 && c <= 122 || c > 64 && c <= 90)
		return (1);
	else
		return (0);
}
