#include <stdio.h>
/**
* _strpbrk -looks for 1st occurence of any character of accept in string s
* @s: str s--occurence look-up;
* @accept: str-
* Return: ptr to 1st occurence of char in str s;
*/
char *_strpbrk(char *s, char *accept)
{
	int s_number;
	int accept_number;
	int len_accept;

	while (*accept != '\0')
	{
		len_accept++;
		accept++;
	}
	accept = accept - (len_accept + 1);
	while (*s != '\0')
	{
		s_number = (int)*s;
		while (*accept != '\0')
		{
			accept_number = (int)*accept;
			if (s_number == accept_number)
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
