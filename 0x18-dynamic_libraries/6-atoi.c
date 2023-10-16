#include <stdio.h>
/**
* _atoi - convert int to string to number
* @s: string to extract occurene of number
* Return: intergetr
*/
int _atoi(char *s)
{
	char *first_pos;
	int value, extracted_number = 0, multiplier = 1;
	char *last_pos;

	while (*s != '\0')
	{
		value = (int)(*s);
		if (value >= 47 && value <= 57)
		{
			first_pos = s;
			last_pos = first_pos;
			for (s = first_pos; *s != '\0'; s++)
			{
				if ((int) (*s) >= 48 && (int)(*s) <= 57)
				{
					last_pos++;
				}
				else
					break;
			}
			break;
		}
		s++;
	}
	if (first_pos != NULL && last_pos != NULL)
	{
		multiplier = 1;
		for (char *p = last_pos; p >= first_pos; p--)
		{
			extracted_number += ((*p) - '0') * multiplier;
			multiplier *= 10;
		}
	}
	return (extracted_number);
}
