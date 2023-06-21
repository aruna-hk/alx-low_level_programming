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
			printf("%d:%d", i, j);
		}
	}
}
