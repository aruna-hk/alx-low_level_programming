#include <stdio.h>
/*
*/
int _atoi(char *s)
{
	char *first_pos;
	int value;
	char *last_pos;

	while (*s != '\0')
	{
		value = (int)(*s);
		if (value >= 47 && value <=57)
		{
			first_pos = s;
			last_pos = first_pos;
			for (s = first_pos; *s != '\0'; s++)
			{
				if ((int) (*s) >= 48 && (int)(*s)<=57)
				{
					last_pos++;
				}
				else
					break;
			}
			break;
		}
		s++;
	}
	int extracted_number = 0;
	    if (first_pos != NULL && last_pos != NULL)
	    {
	        int multiplier = 1;
	        for (char *p = last_pos; p >= first_pos; p--)
	        {
	            extracted_number += ((*p) - '0') * multiplier;
	            multiplier *= 10;
	        }
	    }    
	 return extracted_number; // Return the extracted number
}
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
