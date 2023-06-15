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
printf("size of a char: %d", sizeof(a));
printf("size of an int: %d", sizeof(b));
printf("size of a long int: %d", sizeof(c));
printf("size of a long long int: %d", sizeof(d));
printf("size of a float: %d", sizeof(e));
return (0);
}
