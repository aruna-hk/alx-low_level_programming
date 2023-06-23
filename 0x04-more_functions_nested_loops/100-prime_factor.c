#include <stdio.h>
#include "main.h"
/**
* bigprime - biggest prime number
* @n: int arg
* Return: value prime-number largest
*/
int bigprime(int n)
{
	int start_at = 2;
	int i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
			n = n / i;
		else
			start_at++;
	}
	return (i);
}
/**
* main - entry point
* Return: 0
*/
int main(void)
{
	int n = 612852475143;
	int l = bigprime(n);

	printf("%d\n", l);
	return (0);
}
