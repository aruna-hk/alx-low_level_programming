#include <stdio.h>
/**
 *
 *
 *
 *
*/
char *cap_string(char *j)
{
	char delimiter[]=",;.!?\"(){} \t\n";
	char caps[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char small[]="abcdefghijklmnopqrstuvwxyz";
	int i;
	int m;

	for(i = 0;i <= 26;i++)
	{
		if (*j = small[i])
		{
			*j = caps[i];
			break;
		}
	}
	while (*j != '\0')
	{
		for (m = 0; m <= 14;m++)
		{
			if (*j == delimiter[m])
			{
				j++;
				for(i = 0;i <= 26;i++)
				{
					if (*j == small[i])
					{
						*j = caps[i];
						break;
					}
				
				}
				break;
			}
		if (prev_delimiter && *j != '\0' && *j != ' ' && *j != '\t' && *j != '\n')
	       	{
			prev_delimiter = 0;
		}
		j++;:
	}

}
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
