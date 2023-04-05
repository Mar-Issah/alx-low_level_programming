#include "lists.h"

/**
 * print_listint - function that prints all the elements
 * of a listint_t list.
 * @h: Points to the head of the list
 * Return: Number of nodes
 **/
size_t print_listint(const listint_t *h)
{
int count;

for (count = 0; h != NULL; count++, h = h->next)
{
printf("%d\n", h->n);
}

return (count);
}
