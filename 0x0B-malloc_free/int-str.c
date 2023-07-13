#include <stdio.h>
//
//
int main()
{
	int a = 100;
	void *aa = a;
	char *ar = (char) aa;
	printf("%s\n",*ar);
	return (0);
}
