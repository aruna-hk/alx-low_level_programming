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
			for (m = 48; m <= 53; m++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (i == 50 && j == 3 && m == 53 && k == 59)
						break;
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(m);
					_putchar(k);
					_putchar('\n');
				}
				if (i == 50 && j == 3 && m == 53 && k == 59)
					break;
			}
			if (i == 50 && j == 51 && m == 3 && k == 59)
				break;
		}
		if (i == 50 && j == 51 && m == 3 && k == 59)
			break;
	}
}
