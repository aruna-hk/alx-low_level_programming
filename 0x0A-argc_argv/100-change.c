#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* main - prints the minimum number of coins to make change for an amount of money.
*/
int coins_denomination(int *deno, int amt, int coins);
int main(int argc, char *argv[])
{
	int deno[] = {25,10,5,2,1};
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
	coins = coins_denomination(ptr,amt, coins);
	printf("%d\n",coins);
	return (0);
} 
int coins_denomination(int *deno, int amt, int coins)
{
	if (amt == *deno)
	{
		coins++;
		return coins;
	}
	else if (amt < *deno)
	{
		deno++;
		return coins_denomination(deno, amt, coins);
	}
	else
	{
		int rem = amt % *deno;
		if (rem != 0)
		{
			coins += amt / *deno;
			deno++;
		}
		return coins_denomination(deno, (rem), coins);
	}   
}

