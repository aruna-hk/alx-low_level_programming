#include "main.h"
/**
* _puts - write character to the string
* @s: character to write to>> output
*/
void _puts(char *s)
{
	write(1, &s, 1);
}
