#include <stdio.h>
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
			if (*needle == *haystack)
				return (haystack);
			haystack++;

		}
		if (*needle == '\0' || *haystack == '\0')
		{
			haystack = org_ptr;
			break;
		}
		haystack = org_ptr;
		needle++;
			break;

	}
	return (NULL);
}
int main(void)
{
    char *s = "hello, world";
    char *f = "k";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}
