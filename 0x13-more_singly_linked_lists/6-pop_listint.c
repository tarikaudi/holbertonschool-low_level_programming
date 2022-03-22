#include "lists.h"

/**
 *pop_listint - main main
 *@head: pointer
 *Return: as always
 */

int pop_listint(listint_t **head)
{
	listint_t *aux2 = (*head);
	int result;

	if (*head == NULL)
		return (0);

	result = aux2->n;
	*head = aux2->next;

	free(aux2);

	return (result);
}
