#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int s, char **arr)
{
    if (s <= 0 || arr == NULL)  // Check for invalid input
        return NULL;

    int arglen = 0;
    int i;
    for (i = 0; i < s; i++)
        arglen += strlen(arr[i]);

    char *args = malloc(sizeof(char) * (arglen + s + 1));
    if (args == NULL)
        return NULL;

    int position = 0;
    for (i = 0; i < s; i++)
    {
        strcpy(args + position, arr[i]);
        position += strlen(arr[i]);
        *(args + position) = '\n';
        *(args + position + 1) = '\0';
    }

    return args;
}

int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac - 1, av + 1);
    if (s == NULL)
    {
        return 1;
    }
    printf("%s", s);
    free(s);
    return 0;
}

