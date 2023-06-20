#include <stdio.h>
#include "main.h"

void times_table(void)
{
	 int a, b;
    
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			printf("%2d, ", a * b);
		}
		printf("$\n");
	}
    
}
