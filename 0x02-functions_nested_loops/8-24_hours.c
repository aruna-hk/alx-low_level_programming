#include "main.h"
/**
* jack_bauer-time counter 
*/
void jack_bauer(void)
{ 
	int i;
	int j;
	int l = 48;
	int m = 48;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48;j <= 51; j++)
		{
			while (l <= 53)
			{
				while (m <=57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(l);
					_putchar(m);
					_putchar('\n');
					m = m + 1;
				}
				l = l + 1;
			}
		}
	}
}
