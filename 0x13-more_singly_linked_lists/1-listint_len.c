#include "lists.h"
/**
 * listint_len - eturns the number of elements in a linked listint_t list.
 *
 * @h: head
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
