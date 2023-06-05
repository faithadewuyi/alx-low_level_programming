#include "lists.h"

/**
 * print_listint - function that prints all the elements of linked list
 * @h: linked list  to print
 * Return: number of nodes to return
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
