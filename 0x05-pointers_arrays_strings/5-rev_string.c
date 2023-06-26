#include <stdio.h>
/**
* rev_string - reverse string
* @s: pointer to the string literal to operate on--
*/
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char swapspace;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	s--;

	while (start < s)
	{
		swapspace = *start;
		*start = *s;
		*s = swapspace;
		start++;
		s--;
	}
	putchar('\n');
}

