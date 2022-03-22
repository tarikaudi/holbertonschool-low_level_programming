#include "lists.h"

/**
 *pop_listint - main main
 *@head: pointer
 *Return: as always
 */

int pop_listint(listint_t **head)
{
	listint_t *aux = (*head);
	int result;

	if (*head == NULL)
		return (0);

	result = aux->n;
	*head = aux->next;

	free(aux);

	
