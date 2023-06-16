#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - check last digit of randomly gen number
* Return: 0
*/
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my checker*/
	lst = n % 10;

	if (lst > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, lst);
	else if (last == 0)
		printf("last digit of %d is %d and is 0\n", n, lst);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lst);
	return (0);
}

