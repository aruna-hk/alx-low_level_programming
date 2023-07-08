#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
* coins_denomination - find the denominations recursively
* @deno: ptr to denomination lookup
* @amt: number to check its denominations
* @coins: denominations added
* Return: 0
*/
int coins_denomination(int *deno, int amt, int *coins)
{
	if (amt == *deno)
	{
		return (*coins + 1);
	}
	else if (amt < *deno)
	{
		deno++;
		return (coins_denomination(deno, amt, coins));
	}
	else
	{
		int rem = amt % *deno;

		if (rem != 0)
		{
			*coins += amt / *deno;
			deno++;
		}
		else
			*coins += amt / *deno - 1;
		return (coins_denomination(deno, (rem), coins));
	}
}
/**
* main - prints the minimum number of
*  coins to make change for an amount of money.
* @argc: numbe of arguements
* @argv: lists of ptrs to args
* Return: 0 sucess 1-failure
*/

int main(int argc, char *argv[])
{
	int deno[] = {25, 10, 5, 2, 1};
	int *ptr = deno;
	int amt;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	if (amt < 0)
	{
		putchar('0');
		putchar('\n');
		return (1);
	}
	coins = coins_denomination(ptr, amt, &coins);
	printf("%d\n", coins);
	return (0);
}
