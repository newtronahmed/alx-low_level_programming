#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 *
 * @head: head;
 * @index: index;
 *
 * Return: 1 or -1;
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *prev;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	i = 0;
	prev  = *head;
	while (prev->next != NULL && i < (index - 1))
	{
		prev  = prev->next;
		i++;
	}
	if (prev->next  == NULL)
		return (-1);
	temp = prev->next;
	prev->next  = temp->next;
	free(temp);
	return (1);
}
