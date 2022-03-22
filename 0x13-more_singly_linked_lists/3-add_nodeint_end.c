#include "lists.h"

/**
 *add_nodeint_end - asd
 *@head: asd
 *@n: asd
 *Return: asd
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *last_point;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		last_point = *head;
		while (last_point->next)
			last_point = last_point->next;

		last_point->next = end_node;
	}
	return (end_node);
}
