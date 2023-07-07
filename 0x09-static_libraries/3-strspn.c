#include <stdio.h>
/**
* _strspn - locates a character in string s and give byte locatin ,,
* @s: --string to search for char in str accept
* @accept: -- str -- source of search charcters
* Return: byte location of char in accpt fro bgnin of str s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*accept != '\0')
	{
		while (*s != '\0')
		{
			if (*accept == *s)
			{
				count++;
			}
			s++;
		}
		accept++;
	}
	return (count + 1);
}
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
