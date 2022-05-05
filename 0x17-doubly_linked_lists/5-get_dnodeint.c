#include "lists.h"

/**
*get_dnodeint_at_index - main main
*@head: head
*@index: index
*Return: aux
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;

	/*necesitamos un contador para comparar con el index*/
	unsigned int count = 0;

	if (aux == NULL)
	{
		return (NULL);
	}
	while (aux != NULL)
	{
		if (count == index)
			return (aux);
		count++;
		aux = aux->next;
	}
	return (aux);

}
