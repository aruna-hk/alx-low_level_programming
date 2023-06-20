#include "main.h"
/**
* _abs - lowecase
* @c: ascii num
* Return: 1 if tue 0 if false
*/
int _abs(int r)
{
	if (r < 0)
	{
		r = r*(-1);
		_putchar(r);
	}
	else
		_putchar(r);
	return (0);
}
