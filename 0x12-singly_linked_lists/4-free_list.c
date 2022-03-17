#include "lists.h"

/**
 *free_list - main main
 *@head: pointer to list
 *Return: return
 **/
void free_list(list_t *head)
{
	list_t *actual, *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual->str);
		free(actual);
		actual = next;
	}
}
