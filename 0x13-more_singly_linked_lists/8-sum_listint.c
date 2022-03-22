#include "lists.h"

/**
*sum_listint - main main
*@head: pointer
*Return: as always
*/
int sum_listint(listint_t *head)
{
	listint_t *list = head;

	int sum = 0;

	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
