#include "lists.h"
/**
 * print_listint - Print elements of list
 *
 * @h: head
 *
 * Return: size_t;
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
