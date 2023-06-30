#include <stdio.h>
/**
* infinite_add - add numbers in two string
* @n1: - string one containing digits
* @n2: --str2--digits
* @r: --ptrr to buffer
* @size_r: ptr buffer
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	if (*n1 == '\0' || *n2 == 0)
		return (0);
	else
	{
		int num1 = (int)n1;
		int num2 = (int)n1;

		int sum = num1 + num2;

		
