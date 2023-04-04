#include "lists.h"
/**
 * print_listint - print nodes of linked list
 * h: head
 * Return: size
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);

}
