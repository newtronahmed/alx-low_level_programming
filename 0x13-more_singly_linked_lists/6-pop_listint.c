#include "lists.h"
/**
 * pop_listint - pop head out
 * @head: head
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	return (temp->n);
}
