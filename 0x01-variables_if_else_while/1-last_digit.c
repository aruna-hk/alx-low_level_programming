#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - check randomly gen number
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*my code*/
	if (n < 0)
		int last = (n % 10) * (-1);
	else
		int last = n % 10;

	if (last > 5)
                printf("Last digit of %d is %d and
			 is greater than 5", n, last);
        else if (last > 0 && last < 6)
                printf("last digit of %d is %d and is
			 less than 6 and not zero", n, last);
        else
                printf("last digit of %d is %d and is 0", n, last);

	return (0);
}

