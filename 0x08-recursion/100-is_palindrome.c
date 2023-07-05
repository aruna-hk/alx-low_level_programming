#include "main.h"
/**
* check_if_palindrome - recieve string,
* its startin, and ending pos, and check if palindrom
* @s: string arguement
* @start: start index of first char in string s
* @end: end index of last char in strin s
* Return: 1 if palindrom /0 if not
*/
int check_if_palindrome(char *s, int start, int end)
	{
	if (start >= end)
		return (1);
	else if (*(s + start) == *(s + end))
		return (check_if_palindrome(s, start + 1, end - 1));
	else
		return (0);
}
/**
* is_palindrome - finds len of string
* and pass it to check if palindrom function
* @s:string arguement to evaluate len and passed onto check function
* Return: from check if palindrom function
*/
int is_palindrome(char *s)
{
	int str_length = _strlen_recursion(char *s);

	if (length == 1)
		return (1);
	return (check_if_palindrome(s, 0, str_length - 1));
}
