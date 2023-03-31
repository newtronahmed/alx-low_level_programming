#include "lists.h"
/**
 * list_len - lenth of list
 *
 * @h: head
 *
 * Return: size
 */
size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
