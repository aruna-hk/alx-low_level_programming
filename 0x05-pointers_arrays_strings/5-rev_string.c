#include <stdio.h>
/**
* rev_string - reverse string
* @s: pointer to the string literal to operate on--
*/
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char swapspace;
	int swapcount = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	s--;

	while (start < s)
	{
		if (swapspace == '\0')
			break;
		else
		{
			swapspace = *start;
			*start = *s;
			*s = swapspace;
			start++;
			s--;
		}
	}
}
int main(void)
{
	char s[11] = "Holberton!";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
