#include <stdio.h>
/**
* rev_string - reverse string
* @s: pointer to the string literal to operate on
*/
void rev_string(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	while (len > 0)
	{
		putchar(*s);
		s--;
		len--;
	}
	putchar('\n');
}
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

