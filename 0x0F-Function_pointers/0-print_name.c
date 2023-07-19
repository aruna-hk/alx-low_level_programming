#include "function_pointers.h"
/**
* print_name -- print name function
* @name:name arg
* @f: pointer to a function
*/
void print_name(char *name, void(*f)(char *name))
{
	f(name);
}
