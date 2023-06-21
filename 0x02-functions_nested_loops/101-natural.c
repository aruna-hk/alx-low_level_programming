/**
* main - entry
* Return: sum of multiples of 3 and 5
*/
int multiples_3_5(int r)
{
	int sum;
	int i;
	int k;
	int m;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		m = i % 3;
		k = i % 5;
		if (m == 0 || k == 0)	
			sum = sum + i;
		else 
			continue;
	}
	return (sum);
}
