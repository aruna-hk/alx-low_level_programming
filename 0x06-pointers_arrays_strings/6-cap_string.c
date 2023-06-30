#include "main.h"
/**
* cap_string -capitalize characters based on delimiters
* @j: takes a strin as arg
* Return: ptr
*/

char *cap_string(char *j)
{
	char *ptr = j;
	char delimiter[] = ",;.!?\"(){} \t\n";
	char caps[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[] = "abcdefghijklmnopqrstuvwxyz";
	int i, m;

	for (i = 0; i < 26; i++)
	{
		if (*j == small[i])
		{
			*j = caps[i];
			break;
		}
	}
	while (*j != '\0')
	{
		for (m = 0; m < 14; m++)
		{
			if (*j == delimiter[m])
			{
				j++;
				while (*j == ' ' || *j == '\t' || *j == '\n')
					j++;
				if (*j != '\0')
				{
					for (i = 0; i < 26; i++)
					{
					if (*j == small[i])
					{
						*j = caps[i];
						break;
					}
					}
				}
				break;
			}
		}
		j++;
	}
	return (ptr);
}
