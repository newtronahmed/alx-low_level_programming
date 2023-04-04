#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 *
 * @head: head
 * @idx: position
 * @n: data
 *
 * Return: address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	listint_t *newnode;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	i = 0;
	current = *head;
	while (current != NULL && i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}
