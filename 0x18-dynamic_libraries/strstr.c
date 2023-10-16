#include <stdio.h>
/**
* _strstr - find occurency of substring needle in heystack
* @haystack: fstring to search substring from
* @needle: substring to search for
* Return:  pointer to where substring starts its occurence / NULL if it bdoesnt
*/
char *_strstr(char *haystack, char *needle)
{
	char *j, *i;

	if (!*needle)
	{
		return (haystack);
	}

	while (*haystack)
	{
		j = haystack;
		i = needle;
		while (*j && *i && *j == *i)
		{
			j++;
			i++;
		}
		if (!*i)
			return (haystack);

		haystack++;
	}
	return (NULL);
}
