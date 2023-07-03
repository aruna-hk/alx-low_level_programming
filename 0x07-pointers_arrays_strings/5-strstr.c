#include "main.h"
/**
* _strstr -looks for 1st occurence of charcter in needle -- in heystack
* @haystack: parent str -- look up;
* @needle: caracter to compare with parent character;
* Return: NULL/ ptr/ ptr --if exist else null
*/
char *_strstr(char *haystack, char *needle)
{
	int num_needle;
	int len = 0;
	int num_haystack;
	char *original_ptr = haystack;

	while (*needle != '\0')
	{
		num_needle = (int) *needle;
		while (*haystack != '\0')
		{
			num_haystack = (int) *haystack;
			if (num_needle == num_haystack)
			{
				return (haystack);
			}
			haystack++;
		}
		haystack = original_ptr;
		needle++;
	}
	return (0);
}
