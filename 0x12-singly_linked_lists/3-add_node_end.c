#include "lists.h"
#include <string.h>
/**
 * add_node_end - add node at end of linkedlist
 *
 * @head: pointer to head;
 * @str: string
 *
 * Return: pointer to new_node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	tmp = *head;
	while (tmp != NULL && tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	if (tmp != NULL)
		tmp->next = new_node;
	else
		*head = new_node;
	return (new_node);

}
