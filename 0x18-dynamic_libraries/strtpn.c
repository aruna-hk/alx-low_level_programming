#include <stdio.h>
/**
* _strspn -  find the len of str seg,ment
* @s: string to locate substring
* @accept: segment tyo look for
* Return: len of seg
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s)
	{
		found = 0;
		for (int i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			break;
		}

		count++;
		s++;
	}
	return (count);
}
