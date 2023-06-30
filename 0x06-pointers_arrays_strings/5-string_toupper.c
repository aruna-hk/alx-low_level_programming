#include <stdio.h>
/**
 * string_toupper - converts small letters to caps
 * @string: takes string as arg
 * Return: ptr to str
 */
char *string_toupper(char *string)
{
	char caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	char *ptr = string;

	while (*string != '\0')
	{
		for (i = 0; i <= 26; i++)
		{
			if (*string == small[i])
			{
				*string = caps[i];
				break;
			}
		}
		string++;
	}
	return (ptr);
}
