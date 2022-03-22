#include "lists.h"

/**
 *free_list - main main
 *@head: pointer
 *Return: as always
 **/
void free_list(list_t *head)
{
	list_t *actual, *next;

	actual = head;

	while (actual != NULL)
	{
		next = actual->next;
		free(actual);
		actual = next;
	}
}
