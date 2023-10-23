#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node to the given list
 * @head: pointer to the head of the list
 * @str: text to copy for the new node
 *
 * Return: the head of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdub(str);
	new->len = len;
	new->next = *head;
	(*head) = new;

	return (head);
}
