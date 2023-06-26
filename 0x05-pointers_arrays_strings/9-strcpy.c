#include <stdio.h>
/**
*
*
*/
char *_strcpy(char *dest, char *src)
{
	int len_of_first = 0;
	int len_of_second = 0;
	char *firstD = dest;
	char *firstS = src;
	while(*dest !='\0')
	{
		len_of_first++;
		dest++;
	}
	le_of_first =len_of_first+1;
	while(*src !='\0')
	{
		len_of_second++;
		src++;
	}
	len_of_second = len_of_secod+1;

	for (:q

	{
		for(;dest<=len_of_second+1;dest++;)
		{
			*dest=*src;
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
