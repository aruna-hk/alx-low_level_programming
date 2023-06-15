#include<stdio.h>
int main(void)
{
char size_c[]={'char','int','long int','long long int','float'}
int i;
for(i=0;i<=sizeof(size_c-1);i++)
	printf("size of {i}=sizeof(i)\n");
return (0);
}
