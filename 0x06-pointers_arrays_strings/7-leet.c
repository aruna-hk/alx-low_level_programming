#include "main.h"
/**
 * leet - encrypt a string -- change character to nubers 0-9
 * @string: string to encript
 * Return: ptr to sting
*/
char *leet(char *string)
{
	char *ptr = string;
	char *encrypt_char = "aAeEoOtTlL";
	char *encrypt_no = "4433007711";

	while (*string)
	{
		int i = 0;

		while (encrypt_char[i])
		{
			if (*string == encrypt_char[i])
			{
				*string = encrypt_no[i];
				break;
			}
			i++;
		}
		string++;
	}
	return (ptr);
}
