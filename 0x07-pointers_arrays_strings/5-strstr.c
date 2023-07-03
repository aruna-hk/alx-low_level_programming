#include "main.h"
/**
 * _strstr - looks for the first occurrence of 'needle' in 'haystack'
 * @haystack: the string to search
 * @needle: the string to find
 * Return: a pointer to the first occurrence, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *org_ptr = needle;

	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*haystack == *needle)
				return (haystack);
			haystack++;
		}
		haystack = org_ptr;
		needle++;
	}
	return (NULL);
}
