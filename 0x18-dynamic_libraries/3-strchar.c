#include "main.h"
/**
* _strchr - locate character in  astring
* @s: string to search
* @c: character tpo search for
* Return: pointer to the character or NULL if not present
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if ((int)*s == (int) c)
			return (s);
	}
	return (NULL);
}
