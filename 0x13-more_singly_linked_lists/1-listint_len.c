#include "lists.h"

/**
 *listint_len - main main
 *@h: pointer
 *Return: as always
 **/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
