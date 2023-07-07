#include "main.h"
/**
* _strpbrk -looks for 1st occurence of any character of accept in string s
* @s: str s--occurence look-up;
* @accept: str-to compat=re its caharacter with  s- string
* Return: ptr to 1st occurence of char in str s;
*/
char *_strpbrk(char *s, char *accept)
{
	char *origin = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = origin;
		s++;
	}
	return (0);
}
