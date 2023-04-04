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
	int data;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	data = temp->n;
	free(temp);
	return (data);
}
