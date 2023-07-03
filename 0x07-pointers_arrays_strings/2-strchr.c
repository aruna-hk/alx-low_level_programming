#include <stdio.h>
/**
* _strchr - locates a character in a string--
* @s: --string to search
* @c: -- character to search
* Return: ptr to 1st occurences of search character//NULL is not found
*/
char *_strchr(char *s, char c)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		if (*s == c)
		{
			return (s);
		}
		s++;
		if (*s == '\0')
			s = s - (len + 1);
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

