#include "lists.h"

/**
*sum_dlistint - main main
*@head: pointer
*Return: as always
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;

	int sum = 0;

	while (list != NULL)
	{
		sum += list->n;
		list = list->next;
	}

	return (sum);
}
