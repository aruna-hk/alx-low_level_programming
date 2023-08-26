#include <stdio.h>

int words(char *str)
{
	int i = 0;
	int words = 0;
	while (str[i] == ' ')
		i++;

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			while (str[i] == ' ')
			i++;
			if (str[i] != '\0')
				words++;
		}
		else
		{
			i++;
		}
	}
	words++;
	return (words);
}
char **strtow(char *str)
{
	int words = words(str);
	int i;
	char **ptr = malloc(sizeof(words));
	while (str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		while(str[i] != ' ')
		{
			**ptr = str[i];
			i++;
		}
		**ptr = '\0';
		ptr++;
	}
int main(void) {
    strtow(" j j    ALX School         #cisfun      ");
    return 0;
}

