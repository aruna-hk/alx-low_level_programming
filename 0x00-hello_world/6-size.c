#include<stdio.h>
/**
* main - print size of data types
* Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of a char: %d byte(s)\n", (unsigned int)sizeof(a));
printf("size of an int: %d byte(s)\n", (unsigned int)sizeof(b));
printf("size of a long int: %d byte(s)\n", (unsigned int)sizeof(c));
printf("size of a long long int: %d byte(s)\n", (unsigned int)sizeof(d));
printf("size of a float: %d byte(s)\n", (unsigned int)sizeof(e));
return (0);
}
