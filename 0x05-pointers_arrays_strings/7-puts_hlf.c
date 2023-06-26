#include "main."
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

	half = len / 2;
	r_half = r_half + len;
	f_half = f_half + half;

	for (str = f_half; str <= r_half - 1; str++)
	{
		putchar(*str);
	}
}
