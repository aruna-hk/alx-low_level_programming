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

	while (*haystack != '\0')
	{
		char *temp1 = haystack;
		char *temp2 = needle;

		while (*temp1 == *temp2 && *temp2 != '\0')
		{
			temp1++;
			temp2++;
		}
		if (*temp2 == '\0')
			return (haystack);
	}
	return (NULL);
}
