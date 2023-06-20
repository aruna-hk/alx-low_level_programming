#include "main.h"
/**
* _islower - lowecase
* @c: ascii num
* Return: 1 if tue 0 if false
*/
int _islower(int c)
{
	if (c > 97 && c <= 122)
		return (1);
	else
		return (0);
}
