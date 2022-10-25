#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: head linked list
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
