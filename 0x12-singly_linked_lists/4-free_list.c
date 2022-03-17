#include "lists.h"

/**
 *free_list - main main
 *@head: pointer to list
 *Return: return
 **/
void free_list(list_t *head)
{
	list_t *list = *head;
	list_t *list2 = NULL;

	while (list != NULL)
	{
		list2 = list->list2;
		free(list->str);
		free(list);
		list = list2;
	}
}
