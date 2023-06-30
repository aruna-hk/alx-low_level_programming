#include "main.h"
/**
 * rot13 - rot 13 encryption
 * @str: - takes string arg
 * Return: string using ptr
*/
char *rot13(char *str)
{
	char rot13_e[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int i;
	int num;
	int num2;
	char *ptr_c = str;

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{	if (*str == rot13_e[i])
			{	num = i + 13)
				if (i <= 25)
				{	if (num > 25)
					{	num2 = 13 - (25 - i);
						i = 0;
						num = i + num2 - 1;
						*str = rot13_e[num];
					}
					else
						*str = rot13_e[num];
				}
				else
				{	if (num > 51)
					{	num2 = 13 - (51 - i);
						i = 26;
						num = i + num2 - 1;
						*str = rot13_e[num];
					}
					else
						*str = rot13_e[num];
				}
				break;
			}
		}
		str++;
	}
	return (ptr_c);
}
