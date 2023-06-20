#include "main.h"
#include <stdio.h>

/**
* print_to_98 - iterate till 98
* @n: takes number n away from 98
*/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
				break;
			}
			else
				printf("%d, ", i);
		}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				_putchar('\n');
				break;
			}
			else
				printf("%d", i);
		}
	}
}
