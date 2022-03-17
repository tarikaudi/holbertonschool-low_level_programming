#include "lists.h"

/**
 *free_list - main main
 *@head: pointer to list
 *Return: return
 **/
void free_list(list_t *head)
{
	list_t *a, *b;

	a = head;

	while (a != NULL)
	{
		b = a->b;
		free(a->str);
		free(a);
		a = b;
	}
}
