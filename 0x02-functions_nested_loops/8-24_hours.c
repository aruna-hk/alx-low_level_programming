#include "main.h"

/**
* jack_bauer-time counter
*/
void jack_bauer(void)
{
	int i;
	int j;
	int m;
	int k;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			if (i == 50 && j == 48)
				continue;
			for (m = 48; m <= 53; m++)
			{
				for (k = 48; k <= 57; k++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(m);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
