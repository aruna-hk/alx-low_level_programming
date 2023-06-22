#include "main.h"
#include <stdio.h>

/**
* _isdigit - check
* Return: 1 if else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <=57)
		return (1);
	else
		return (0);
}
int main()
{
	
	int i;
	char c;
	c ='a';
	printf("%c: %d\n", c, _isdigit(c));
	return 0;
}
