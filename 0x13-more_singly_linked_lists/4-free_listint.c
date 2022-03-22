#include "lists.h"

/**
 *free_listint - main main
 *@head: pointer
 *Return: as always
 **/
void free_listint(listint_t *head)
{
	void *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
