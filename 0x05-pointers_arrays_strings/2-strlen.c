#include <stdio.h>
/**
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
int _strlen(char *s)
{
	int len;

	for ( ; *s != '\0'; *s++)
		len = len + 1;
	return (len);
}
