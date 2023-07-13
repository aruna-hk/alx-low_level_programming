#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncat - append string to the end of a string
 * @dest: - base str
 * @src: - str to append to dest str
 * @n: number of bytes to append
 * Return: dest -- pointer to dest
*/
void _strncat(char *dest, char *src, int n)
{
        int i = 0;
        char *ptr = dest;

        while (*dest != '\0')
        {
                dest++;
        }
        while (i < n && (*src != '\0'))
        {
                *dest = *src;
                dest++;
                src++;
                i++;
        }
        *dest = '\0';
}
int words_count(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
        if (*str != ' ' && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*str == ' ')
        {
            in_word = 0;
        }

        str++;
    }

    return count;
}

char **splits(char *s)
{
	int i;
	int wordsize;
	int no_of_words;
	no_of_words = words_count(s);
	char **arr_words = malloc(sizeof(char *) * no_of_words);
	for ( i = 0; i < no_of_words; i++)
	{
		wordsize = 0;
		while (*s != ' ' && *s != '\0')
		{
			wordsize++;
			s++;
		}
		char * pt = malloc(sizeof(char) * (wordsize + 1));
		s = s-1;//reset to last 
		strncpy(pt, s - wordsize, wordsize);
		arr_words[i] = malloc(sizeof(char) * (wordsize + 1));
		strcpy(arr_words[i],pt);
		free(pt);
		s++;
	}
	
	return (arr_words);
}
int main()
{
    char str[] = "kiptoo haron ngenoh";
    char **words = splits(str);

    if (words == NULL)
    {
        printf("Failed to split the string.\n");
        return 1;
    }

    int i = 0;
    while (words[i] != NULL)
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }

    free(words);

    return 0;
}
