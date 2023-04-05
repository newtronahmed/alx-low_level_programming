#include "lists.h"
/**
 * reverse_listint - reverse linked list
 *
 * @head: head
 *
 * Return: new head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	current = *head;
	*head = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = *head;
		*head = current;
		current = next;
	}
	return (*head);
}
