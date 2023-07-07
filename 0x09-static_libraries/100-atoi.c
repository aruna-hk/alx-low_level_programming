#include "main.h"
/**
*  _atoi - fincs occurence of integer in a string
* @s: takes a string --arg
* Return: j number from string s
*/
int _atoi(char *s)
{
	int n = 1;
	int i = 0;
	unsigned int j = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			n = -n;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		j = (j * 10) + (s[i] - '0');
		i++;
	}
	j = j * n;
	return (j);
}
