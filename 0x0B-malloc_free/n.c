#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\n';
    return dest;
}

char *_strcat(char *dest, char *src)
{
    int len = strlen(dest);
    int i = 0;
    while (src[i] != '\0')
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\n';
    return dest;
}

char *argstostr(int s, char **arr)
{
    if (s <= 0 || arr == NULL)
        return NULL;

    int arglen = 0;
    int i;
    for (i = 0; i < s; i++)
        arglen += strlen(arr[i]);

    char *args = malloc(sizeof(char) * (arglen + s + 1));
    if (args == NULL)
        return NULL;

    char *position = args;
    _strcpy(position, arr[0]);
    position += strlen(arr[0]);

    for (i = 1; i < s; i++)
    {
        _strcat(position, arr[i]);
        position += strlen(arr[i]);
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

