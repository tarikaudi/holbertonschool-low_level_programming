#include "lists.h"

/**
 *free_dlistint - main main
 *@head: pointer teste test test
 *Return: as always
 **/
void free_dlistint(dlistint_t *head)
{
	void *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
