#include "main.h"
/**
* _abs - lowecase
* @r: ascii num
* Return: 0
*/
int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
	{
		_putchar(r);
		return (r);
	}
}
