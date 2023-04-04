#include "lists.h"

/**
 * listint_len - function name
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements
 **/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return count;
}
