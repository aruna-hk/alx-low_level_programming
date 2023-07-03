#include "main.h"
/**
* _strstr -looks for 1st occurence of charcter in needle -- in heystack
* @haystack: parent str -- look up;
* @needle: caracter to compare with parent character;
* Return: NULL/ ptr/ ptr --if exist else null
*/
char *_strstr(char *haystack, char *needle)
{
	char *org_ptr = haystack;

	while (*needle != '\0')
	{
		if (*needle == '\0')
			break;
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
			{
				return (haystack);
			}
			haystack++;
		}
		haystack = org_ptr;
		needle++;
	}
	return (NULL);
}
