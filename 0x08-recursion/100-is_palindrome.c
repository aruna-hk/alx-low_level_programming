#include "main.h"
/**
* is_palindrome - check if string reads the ame way forwar and backword
* @s:string arguement
* Return: 1 is palindrom else 0
*/
int is_palindrome(char *s)
{
	int i = 0;
	int len_s = 0;
	char *start = s;

	while (*s != '\0')
	{
		len_s++;
		s++;
	}
	s--;
	while (i < len_s)
	{
		if (*start != *s)
			return (0);
		if (*start == *s && i == len_s - 1)
			return (1);
		start++;
		s--;
		i++;
	}
}
