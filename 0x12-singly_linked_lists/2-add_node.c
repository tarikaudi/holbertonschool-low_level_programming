#include "lists.h"

/**
 *_strlen - strelen
 *@string: string
 *Return: return
 **/
int _strlen(const char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}

/**
 *add_node - function main main
 *@head: pointer to pointer
 *@str: str
 *Return: return i
 **/
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;

	if (str == NULL)
		return (NULL);

	list = malloc(sizeof(list_t));

	if (new_list == NULL)
		return (NULL);

	list->str = strdup(str);
	list->len = _strlen(str);
	list->next = *head;
	*head = list;

	return (list);
}
