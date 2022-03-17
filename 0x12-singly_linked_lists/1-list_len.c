#include "lists.h"

/**
 *list_len - function main main
 *@h: struct
 *Return: return i
 **/
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
