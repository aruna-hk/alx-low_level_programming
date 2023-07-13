#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 * string copy funcction
 * return pointer to destination string
 * /
 */
char *stringcpy(char *dest,char *src)
{
	char *heap_space;

	if (strlen(dest) == 0 && strlen(src) == 0)
		return (0);
	if (sizeof(dest) < sizeof(src))
	{
		heap_space = malloc(sizeof(src));
		while (*src != '\0')
		{
			*heap_space = *src;
			heap_space++;
			src++;
		}
		*heap_space = '\0';
		return (heap_space); 
	}
	while ( *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;

	}
	*dest = '\0';
	return (dest);
}
int main(void)
{
    char *s[10];

    char *p = stringcpy(s, "ALX SE");
    printf("%s\n", p);
    free(heap_space);
    return (0);
}
