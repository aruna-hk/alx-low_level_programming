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
					if (i == 50 && j == 51 && m == 53 && k == 59)
						break;
					putchar(i);
					putchar(j);
					putchar(58);
					putchar(m);
					putchar(k);
					putchar('\n');
				}
				if (i == 50 && j == 51 && m == 53 && k == 59)
					break;
			}
			if (i == 50 && j == 51 && m == 53 && k == 59)
				break;
		}
		if (i == 50 && j == 51 && m == 53 && k == 59)
			break;
	}
}
