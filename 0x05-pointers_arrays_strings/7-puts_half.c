#include "main.h"
/**
* puts_half - split string into half and displays
* @str: strg to split
*/
void puts_half(char *str)
{
	char *r_half = str;
	char *f_half = str;
	int half;
	int len = 0;

	while (*str != '\0')
	{
		len = len + 1;
		str = str + 1;
	}
	str--;

	if (len % 2 != 0)
	{
		half = (len - 1) / 2;
		f_half = f_half + half + 1;
	}
	else
	{
		half = len / 2;
		f_half = f_half + half;
	}

	r_half = r_half + len;

	for (str = f_half; str <= r_half; str++)
	{
		_putchar(*str);
	}
	putchar('\n');
}
