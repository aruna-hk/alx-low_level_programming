#include "function_pointers.h"
/**
* array_iterator - execute function for every element in array
* @array: array of elements to execute with function action
* @size: size of array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
