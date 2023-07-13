#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int words_count(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str != '\0')
    {
	if (((*str != ' ') || (*str != '	')) && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if ((*str == ' ') ||( *str == '	'))
        {
            in_word = 0;
        }

        str++;
    }

    return count;
}

char **strtow(char *s)
{
    int i;
    int wordsize;
    int no_of_words = words_count(s);
    char **arr_words = malloc(sizeof(char *) * (no_of_words + 1));
    char *ptr = s;
	if (*s == '	' || *s == ' ')
		s++;
	for (i = 0; i < no_of_words; i++)
	{
		 wordsize = 0;
		while (((*ptr != ' ') || (*ptr != '	')) && *ptr != '\0')
		{
			wordsize++;
			ptr++;
		}
		arr_words[i] = malloc(sizeof(char) * (wordsize + 1));
		strncpy(arr_words[i], ptr - wordsize, wordsize);
		if ((*ptr == ' ') || (*ptr = '	'))
			ptr++;
		s = ptr;
	}
	arr_words[no_of_words] = '\0';
	return (arr_words);
}
/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
