#include "main.h"
#include <stdio.h>

/**
* jack_bauer-time counter
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 49; j++)
		{
			if (i < 10 && j < 10)
				printf("0%d:0%d\n", i, j);
			else if (i < 10)
				printf("0%d:%d\n", i, j);
			else if (j < 10)
				printf("%d:0%d\n", i, j);
			else
				printf("%d:%d", i, j);
		}
	}
}
