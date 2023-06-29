#include "main.h"
/**
 * reverse_array - print reverse array
 * @a: -- pointer to array
 * @n: numbers of elements in the array
*/
void reverse_array(int *a, int n)
{
	int *last_element = a + (n - 1);
	int temp;

	while (a < last_element)
	{
		temp = *a;
		*a = *last_element;
		*last_element = temp;
		a++;
		last_element--;
	}
}
