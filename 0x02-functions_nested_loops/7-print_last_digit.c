/**
* print_last_digit - check sign of number
* @n: take number
* Return: last digit
*/
int print_last_digit(int n)
{
	int last = n % 10;
	int lastlast;

	if (n < 0)
	{
		last = last * -1;
		lastlast = printf("%d%d", last, last)
		return (lastlast);
	}
	else if (n > 0)
	{
		lastlast = printf("%d%d", last, last)
		return (last);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
