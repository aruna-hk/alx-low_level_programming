#include "main.h"
/**
* _strpbrk -looks for 1st occurence of any character of accept in string s
* @s: str s--occurence look-up;
* @accept: str-
* Return: ptr to 1st occurence of char in str s;
*/
char *_strpbrk(char *s, char *accept)
{
	int len_accept;

	while (*accept != '\0')
	{
		len_accept++;
		accept++;
	}
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = accept - (len_accept + 1);
		s++;
	}
	return (NULL);
}
