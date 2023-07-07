#include "main.h"
/**
 * _strcmp - compare string
 * @s1: sting1
 * @s2: string2
 * Return: difference
*/
int _strcmp(char *s1, char *s2)
{
	int difference;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	difference = (int)*s1 - (int)*s2;
	return (difference);
}
