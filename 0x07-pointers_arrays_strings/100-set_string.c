#include "main.h"
/**
* set_string - sets value of ptr to char
* @s: ptr to ptr --2step ptr
* @to: --ptr one step ptr
*/
void set_string(char **s, char *to)
{
	*s = to;
}
