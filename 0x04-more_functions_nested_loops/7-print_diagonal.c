#include <stdio.h>
/**
* print_diagonal - provided length
* @n: lengt param
*/
void print_diagonal(int n)
{
	int i;
	int j;
	int l;

	if (n <= 0)
		putchar('\n');
	else
		for (i = 1; i < n; i++)
		{
			for (l = 1; l <= n - 1; l++)
		 	{
				putchar(' ');
				for (j = 1; j <= i; j++)
					putchar('#');
			}
			
			putchar('\n');
		}
}
int main()
{
	print_diagonal(0);
	print_diagonal(5);
	print_diagonal(10);
	print_diagonal(15);
	return 0;
}
