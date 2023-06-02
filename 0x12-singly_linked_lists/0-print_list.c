#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all elements of a linked list
 * @h: points to  list_t list
 * Return: amount of printed nodes
 */
size_t print_list(const list_t *h)
{
	size_t f = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
f++;
}

return (f);
}
