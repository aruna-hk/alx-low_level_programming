#include <stdio.h>
/**
* puts2 -
* @str
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		*(str+2);
	}
	putchar('\n');
}
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
