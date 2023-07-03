#include <stdio.h>
/**
* _strchr - locates a character in a string--
* @s: --string to search
* @c: -- character to search
* Return: ptr to 1st occurences of search character//NULL is not found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
