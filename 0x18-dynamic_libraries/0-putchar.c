#include "main.h"
/**
* _putchar - write chaaracter to std out
* @c: character
* Return: +1 if sucess or -1 if failure
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
