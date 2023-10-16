#include "main.h"

/**
* _strpbrk - locates the first occurence in string s of any character
* in accept
* @s: string to search any element of accept in
* @accept: character to search in  s
* Return: pointer to pos of the first occurence or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
