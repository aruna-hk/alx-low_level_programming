#include <stdio.h>
/**
* check_if_palindrome - recieve string,
* its startin, and ending pos, and check if palindrom
* @s: string arguement
* @start: start index of first char in string s
* @end: end index of last char in strin s
* Return: 1 if palindrom /0 if not
*/
int _compare(char *s1, char *s2, int start, int end1)
{
        if (*s1 == *s2)
                return (1);
        else if (*(s2 == '*')
                return (_compare(s1 ,s2, start + 1);
        else
                return (0);
}
/**
* _strlen_recursion - checks string length
* @s: string arguement
* Return: int string lenth
*/
int _strlen_recursion(char *s) 
{
        if (*s == '\0')
                return (0);
        return (1 + _strlen_recursion(s + 1));
}
/**
* wildcmp -compares string is they match using wildcats
* @s1: char 1
* @s2: char 2
* Return: 1 if matching 0 if not
*/
int wildcmp(char *s1, char *s2)
{
	s1_len = _strlen_recursion(s1)
	s2_len = _strlen_recursion(s2)
	if (s1_len ==  1 && s2_len == 1 && *s1 == *s2)
		return (1);
	else if (s1_len == s2_len)
		_compare(s1, s2, 0, s1_len - 1);
