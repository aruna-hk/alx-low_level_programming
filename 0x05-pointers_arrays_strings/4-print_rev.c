#include <stdio.h>
/**
* _puts - display the str passed
* @str: -take the string
*/
void print_rev(char *s)
{
	for (*s = '\0'-1;;s--)
		_putchar(s);
	_putchar('\n');
}
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
}  
