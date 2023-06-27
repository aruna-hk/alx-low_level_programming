#include <stdio.h>
/**
*
*
*/
char *_strcpy(char *dest, char *src)
{
	int len_src = 0;
	int len_dest = 0;
	char *desl = dest;
	char *srcl = src;

	while(*dest !='\0')
	{
		len_dest++;
		dest++;
	}
	
	while(*src !='\0')
	{	
		len_src++;
		src++;
	}
	while (src > srcl)
	{
		while(dest > desl)
		{
			*dest = *src;
			dest--;
			break;
		}
		src--;
	}
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
