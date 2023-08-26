#include "lists.h"
/**
* print_number - takes int print them as characters
* @n: int argument
*/
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
/**
* print_listint - printf list of intergers singly linked list
* of intergers
* @h: head prt of the list
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	if (h == NULL)
		return (node_num);
	while (h != NULL)
	{
		node_num++;
		print_number(h->n);
		_putchar('\n');
		h = h->next;
	}
	return (node_num);
}
