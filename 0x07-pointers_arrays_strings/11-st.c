#include <stdio.h>
/**
 * _strstr - looks for the first occurrence of 'needle' in 'haystack'
 * @haystack: the string to search
 * @needle: the string to find
 * Return: a pointer to the first occurrence, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *org_ptr = haystack;

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}

int main(void)
{
    char *haystack = "kiptoo harold";
    char *needle = "ld";
    char *result = _strstr(haystack, needle);

    if (result != NULL)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}

