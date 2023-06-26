#include "main.h"
/**
* puts2 - check string legthn
* @str: pointer to array of chaacters
*/
void puts2(char *str)
{
	int len = 0;
	char *beginpoint = str;

	while (*str != '\0')
	{
		len = len + 1;
		str++;
	}
	str--;

	while (beginpoint <= str)
	{
		putchar(*beginpoint);
		beginpoint = beginpoint + 2;
	}
	putchar('\n');
}
