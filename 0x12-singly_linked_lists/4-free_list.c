#include "lists.h"

/**
 *free_list - main main
 *@head: pointer to list
 *Return: return
 **/
void free_list(list_t *head)
{
	list_t *list_1, *list_2;

	list_1 = head;

	while (list_1 != NULL)
	{
		list_2 = list_1->list_2;
		free(list_1->str);
		free(list_1);
		list_1 = list_2;
	}
}
