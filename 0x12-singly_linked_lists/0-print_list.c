#include "lists.h"

/**
 *print_list - function main main
 *@h: struct
 *Return: return i
 **/
size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		i++;
	}
	return (i);
}
