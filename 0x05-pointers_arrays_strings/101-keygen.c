#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void passwd_gen(char *len, int passwdlen);
/**
 * main - program that generates random valid
 * Return: 0
 */

int main(void)
{
	int passwdlen = 15;
	char passwd[16];

	passwd_gen(passwd, passwdlen);
	printf("%s\n", passwd);

	return (0);
}
/**
* passwd_gen - generatepasswrd of len 15
* @len: pointer to passwd variable
* @passwdlen: len of passwd
*/
void passwd_gen(char *len, int passwdlen)
{
	char qualifiers[] = "acdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRTSTUVWXYZ0123456789!@#$%^&*?-";
	int i;

	srand(time(NULL));
	for (i = 0; i < passwdlen; i++)
	{
		len[i] = qualifiers[rand() % sizeof(qualifiers) - 1];
	}
	len[passwdlen] = '\0';
}
