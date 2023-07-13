#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int words_count(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str != ' ')
        {
            count++;
            while (*str != ' ' && *str != '\0')
                str++;
        }
        else
        {
            str++;
        }
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
    char *ptr = s;

    for (i = 0; i < no_of_words; i++)
    {
        wordsize = 0;
        while (*ptr != ' ' && *ptr != '\0')
        {
            wordsize++;
            ptr++;
        }

        char *pt = malloc(sizeof(char) * (wordsize + 1));
        strncpy(pt, s, wordsize);
        arr_words[i] = malloc(sizeof(char) * (wordsize + 1));
        strcpy(arr_words[i], pt);
        free(pt);

        s += wordsize + 1;  // Move s to the next character after the word
    }

    return arr_words;
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

    tab = splits("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
