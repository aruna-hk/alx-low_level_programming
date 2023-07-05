#include "main.h"
/**
* sqrt_root - function to compute square root of a number
* @root: base root == 0;
* @number: num to check compute root
* Return: -1 if no root and root if these
*/
int sqrt_root(int root, int number)
{
	if ((root * root) > number)
		return (-1);
	else if ((root * root) == number)
		return (root);
	else
		return (sqrt_root(root + 1, number));
}
/**
* _sqrt_recursion - find square root of a number
* @n: number to find sqr root
* Return: sqrt
*/
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqrt_root(root, n));
}
