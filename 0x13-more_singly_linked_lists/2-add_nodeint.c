#include "lists.h"
/**
 * add_nodeint - add node at the beginning of list
 *
 * @head: head
 *
 * @n: number
 *
 * Return: addres or null
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode= malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
