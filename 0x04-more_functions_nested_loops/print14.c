#include "main.h"
/**
* more numbers -prints o1-14 10 tims
*/
void more_numbers(void)
{
	int i;
	int j;
	int k;
	int m;
	int v;

	for (i = 0; i <= 10; i++)
	{
		for (	j = 48; j <= 57 ; j++)
		{
			if (j == 57)
			{
				m = 49;
				for (k = 48; k <= 52; k++)
				{
					_putchar(m);
					_putchar(k);
				}
			}
			else
				_putchar(j);
		}
		_putchar('\n');
	}
}
