#include <stdio.h>
/**
* _strchr - locates a character in a string
* @s: --string to search
* @c: -- character to search
* Return: ptr to 1st occurences of search character//NULL is not found
*/
char *_strchr(char *s, char c)
{
	int num;
	int compare;
	char ss;

	num = (int)c;
	while (*s != '\0')
	{
		ss = *s;
		compare = (int)ss;
		if (num == compare)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
