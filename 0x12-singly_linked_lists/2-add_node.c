#include "lists.h"
#include <string.h>
/**
 * add_node - add node to beginning of linkedlist
 *
 * @head: pointer to beginning of linkedlist
 * @str: string
 *
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if ((new_node->str) == NULL)
	{
		free(new_node);
		return (NULL);
	}
	*head = new_node;
	return (*head);


}
