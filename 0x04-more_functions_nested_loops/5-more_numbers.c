//#include "main.h"
# include <stdio.h>
/**
* more_numbers -prints o1-14 10 tims
*/
int main(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 10; i++)
	{
		for (j = 48; j <= 57 ; j++)
		{
			if (j == 57)
			{
				m = 1;
				continue;
			}
			putchar(j + m);
		}
		putchar('\n');
	}
	putchar('\n');
	return 0;
}
