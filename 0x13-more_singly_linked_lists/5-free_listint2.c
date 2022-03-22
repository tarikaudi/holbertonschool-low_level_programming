#include "lists.h"

/**
 *free_listint2 - main main
 *@head: pointer
 *Return: as always
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
}
