#include <stdio.h>
/**
* _strcpy - copy string to another
* @dest: reipient
* @src: source
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int len_src = 0;
	int len_dest = 0;
	char *desl = dest;
	char *srcl = src;
//lloop to check len of strg point by dest
	while (*dest != '\0')
	{
		len_dest++;
		dest++;
	}//loope exit when dest is pointing to the null chracter
//loop to check len of string pointed to by src
	while (*src != '\0')
	{
		len_src++;
		src++;
	}
//loop exits with src pointing to null character at th end
//copying loop
	while (src > srcl)
	{
		while (dest > desl)
		{
			*dest = *src;
			dest--;
			break;
		}
		src--;
	}
	return (dest);
}
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
