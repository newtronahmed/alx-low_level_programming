#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 *
 * @head: head
 * @index: index
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
