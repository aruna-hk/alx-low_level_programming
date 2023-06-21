#include <stdio.h>
#include "main.h"

/**
* times_table -multiplication table
*/
void times_table(void)
{
	int a,
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			printf("%d, %d", a * b, b);
			if (b != 9)
				printf(",");
		}
		printf("\n");
	}
}
