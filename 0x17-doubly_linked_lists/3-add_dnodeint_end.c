#include "lists.h"

/**
 *add_dnodeint_end - main main
 *@head: head
 *@n: n
 *Return: end node
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *aux = *head;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->next = NULL;
		newNode->prev = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (aux->next != NULL)
	{
		aux = aux->next;
	}

	aux->next = newNode;
	newNode->prev = aux;

	return (newNode);
}
