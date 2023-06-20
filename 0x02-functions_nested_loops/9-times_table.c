#include <stdio.h>
#include "main.h"

void times_table(void)
{
	 int a, b;
    
	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			printf("%d", a * b);
			if (b == 9)
				continue;
			else if (a == 0 || a == 1||b == 0|| 3<=a<=4)
			{
				printf(",  ");
				continue;
			}
			printf(", ");
		}
		printf("\n");
	}
    
}
