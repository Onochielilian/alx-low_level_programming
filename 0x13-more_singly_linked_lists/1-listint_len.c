#include "lists.h"
/**
 * listint_len - return the number of element in a linked list
 * @h: linked list of type  listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}


