#include "lists.h"
/**
 * print_list - print a sigly linked list
 *
 * @h: list param
 *
 * Return: size_t number_of_nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 1;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
