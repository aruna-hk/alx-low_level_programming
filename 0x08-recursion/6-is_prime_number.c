#include "main.h"
/**
* is_prime_number - check if number is prime
* @n: number to check--arg
* Return: if prime 1 else 0;
*/
int is_prime_number(int n)
{
	if ((n % 10) % 2 == 0 || (n % 10  == 5))
		return (0);
	if (n <= 1)
		return (0);
	return (1);
}
