#include <stdio.h>
/**
* _strlen - check string legthn
* @s: pointer to arra of chaacters
* return: length;
*/
int _strlen(char *s)
{
	return (sizeof(s));
}
int main()
{   char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
